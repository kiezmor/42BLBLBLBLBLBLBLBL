/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 05:26:47 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/23 19:15:54 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_words(char *str)
{
	int		words;

	words = 0;
	while (*str)
	{
		while (*str == '\t' || *str == '\n' || *str == ' ')
			str++;
		if (*str && !(*str == '\t' || *str == '\n' || *str == ' '))
			words++;
		while (*str && !(*str == '\t' || *str == '\n' || *str == ' '))
			str++;
	}
	return (words);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	**ft_split_whitespaces(char *str)
{
	char		**tab;
	char		**rslt;
	size_t		i;

	tab = (char**)malloc(sizeof(char*) * (ft_words(str) + 1));
	rslt = tab;
	tab[ft_words(str)] = NULL;
	if (!tab)
		return (tab);
	while (*str)
	{
		while (*str == '\t' || *str == '\n' || *str == ' ')
			str++;
		i = 0;
		while (str[i] && !(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
		if (i)
		{
			*tab = (char*)malloc(sizeof(char) * (i + 1));
			tab[0][i] = '\0';
			ft_strncpy(*tab++, str, i);
			str = str + i;
		}
	}
	return (rslt);
}
