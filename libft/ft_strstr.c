/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:04:33 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/16 02:07:41 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	v;
	int	p;

	v = 0;
	p = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[p] != '\0')
	{
		while (str[p + v] == to_find[v])
		{
			v++;
			if (to_find[v] == '\0')
				return (&str[p]);
		}
		p++;
		v = 0;
	}
	return (NULL);
}
