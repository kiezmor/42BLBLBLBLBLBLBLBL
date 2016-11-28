/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 04:19:33 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/28 05:21:46 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	v;

	v = 0;
	while ((s1[v] || s2[v]) && (v < n))
	{
		if (s1[v] > s2[v])
			return ((unsigned char)s1[v] - (unsigned char)s2[v]);
		if (s1[v] < s2[v])
			return ((unsigned char)s1[v] - (unsigned char)s2[v]);
		v++;
	}
	return (0);
}
