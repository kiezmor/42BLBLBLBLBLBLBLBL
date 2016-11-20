/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:53:26 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/09 16:59:44 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	size_t	v;

	v = 0;
	while (v < len && src[v])
	{
		dst[v] = src[v];
		v++;
	}
	while (v < len)
	{
		dst[v] = '\0';
		v++;
	}
	return (dst);
}
