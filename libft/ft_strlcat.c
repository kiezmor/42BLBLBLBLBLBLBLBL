/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:18:42 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/17 00:29:57 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	v;
	size_t	cpdst;
	size_t	cpsrc;

	v = 0;
	cpdst = ft_strlen(dst);
	cpsrc = ft_strlen(src) + cpdst;
	if (size <= cpdst || !size || !dst || !src)
		return (size + (cpsrc - cpdst));
	while (cpdst < size)
	{
		v++;
		dst[v] = src[v];
	}
	dst[--v] = '\0';
	return (cpsrc);
}
