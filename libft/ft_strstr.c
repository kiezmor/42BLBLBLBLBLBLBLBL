/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:04:33 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/22 01:53:45 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	v;
	int	p;

	v = 0;
	p = 0;
	if (little[0] == '\0')
		return (big);
	while (big[p] != '\0')
	{
		while (big[p + v] == little[v])
		{
			v++;
			if (little[v] == '\0')
				return (&big[p]);
		}
		p++;
		v = 0;
	}
	return (NULL);
}
