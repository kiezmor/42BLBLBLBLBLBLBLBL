/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 12:33:43 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/17 00:27:09 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*p;
	size_t	v;

	v = -1;
	p = dest;
	while (++v < n)
	{
		*(p + v) = *((unsigned char *)src + v);
		if (*((unsigned char *)src + v) == (unsigned char)c)
			return (dest + v + 1);
	}
	return (NULL);
}
