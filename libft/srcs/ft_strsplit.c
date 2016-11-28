/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 00:24:07 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/29 00:09:11 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lenword(char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		count;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	count = ft_countwords((char *)s, c);
	tab = (char **)malloc((count + 1) * sizeof(char*));
	i = 0;
	if (!tab)
		return (NULL);
	while (count--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_lenword((char *)s, c));
		if (!tab[i])
			return (0);
		s = s + ft_lenword((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
