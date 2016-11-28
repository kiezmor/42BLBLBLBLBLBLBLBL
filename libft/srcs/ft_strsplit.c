/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 00:24:07 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/28 23:16:25 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char		**tmp;
	size_t		i;
	size_t		len;
	size_t		count;

	i = 0;
	count = ft_countwords(s, c);
	if (!(tmp = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			tmp[count++] = ft_strsub(s, i, len);
			i = i + len;
		}
	}
	tmp[count] = NULL;
	return (tmp);
}
