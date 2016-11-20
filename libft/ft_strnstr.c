/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:12:48 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/17 00:30:25 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	v;

	if (*little == '\0')
		return ((char *)big);
	v = ft_strlen(little);
	while (*big != '\0' && len-- >= v)
	{
		if (*big == *little && ft_memcmp(big, little, v) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
