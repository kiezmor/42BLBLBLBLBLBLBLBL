/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:21:36 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/19 06:51:26 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	char	**tab;
	char	**tmp;

	if (!s)
		return (NULL);
	if (!(tmp = (char**)malloc(sizeof(char*) * (ft_countn(s, c) + 1))))
		return (NULL);
	tab = tmp;
	tmp[ft_countn(s, c)] = NULL;
	while (*s && tmp)
	{
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (i)
		{
			*tmp = ft_strndup(s, i);
			s = s + i;
			tmp++;
		}
		while (*s == c)
			s++;
	}
	return (tab);
}
