/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 00:24:07 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/28 08:35:25 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbwords(char const *s, char c)
{
	size_t		nb;

	nb = 0;
	while (*s && s)
	{
		while (*s == c)
			s++;
		if (*s)
			nb++;
		while (*s && *s != c)
			s++;
	}
	return (nb);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str;
	size_t		tmp;
	size_t		i;
	size_t		words;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_nbwords(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	str[words] = NULL;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		tmp = i;
		while (s[i] && s[i] != c)
			i++;
		if (tmp < i)
			str[words++] = ft_strsub((s + tmp), 0, (i - tmp));
	}
	return (str);
}
