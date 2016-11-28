/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 22:26:31 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/28 02:02:54 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *p;

	p = (char *)s;
	while (n--)
	{
		if (*p == c)
			return ((unsigned char *)p);
		if (n)
			p++;
	}
	return (NULL);
}
