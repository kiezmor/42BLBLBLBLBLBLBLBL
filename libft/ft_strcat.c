/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:00:05 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/09 17:11:48 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int v;
	int p;

	v = 0;
	p = -1;
	while (dest[v] != '\0')
		v++;
	while (src[++p] != '\0')
		dest[v + p] = src[p];
	dest[v + p] = '\0';
	return (dest);
}
