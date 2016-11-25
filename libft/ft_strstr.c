/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:04:33 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/25 05:52:20 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *b, const char *l)
{
	int	v;
	int	p;

	v = 0;
	p = 0;
	if (l[0] == '\0')
		return (b);
	while (b[p] != '\0')
	{
		while (b[p + v] == l[v])
		{
			v++;
			if (l[v] == '\0')
				return (&b[p]);
		}
		p++;
		v = 0;
	}
	return (NULL);
}
