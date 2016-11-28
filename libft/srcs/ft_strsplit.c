/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 00:24:07 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/28 05:04:05 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbr(char *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (*s)
	{
		if (nb == 0 && *s != c)
		{
			nb = 1;
			i++;
		}
		else if (nb == 1 && *s == c)
			nb = 0;
		s++;
	}
	return (i);
}

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
	int		nbr1;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	nbr1 = ft_nbr((char *)s, c);
	tab = (char **)malloc((nbr1 + 1) * sizeof(char*));
	i = 0;
	if (!tab)
		return (NULL);
	while (nbr1--)
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
