/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:32:35 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/09 16:37:14 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(char *src)
{
	int		v;
	char	*dest;

	v = 0;
	while (src[v] != '\0')
		v++;
	dest = (char*)malloc(sizeof(*src) * (v + 1));
	if (!dest)
		return (dest);
	v = 0;
	while (src[v] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	dest[v] = '\0';
	return (dest);
}
