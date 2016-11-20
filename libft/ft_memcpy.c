/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:05:44 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/17 00:28:52 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	v;
	char	*p1;
	char	*p2;

	p1 = dest;
	p2 = (char	*)src;
	v = -1;
	while (++v < n)
		*(p1 + v) = *(p2 + v);
	return (dest);
}
