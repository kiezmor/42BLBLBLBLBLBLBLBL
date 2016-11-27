/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:04:33 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/27 19:52:37 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *b, const char *s)
{
	int j;

<<<<<<< HEAD
	v = 0;
	p = 0;
	if (l[0] == '\0')
		return ((char *)b);
	while (b[p] != '\0')
	{
		while (b[p + v] == l[v])
		{
			v++;
			if (l[v] == '\0')
				return ((char *)b);
		}
		p++;
		v = 0;
=======
	j = 0;
	if (!(*s))
		return ((char *)b);
	while (*b)
	{
		while (b[j] == s[j] && s[j] && b[j])
			j++;
		if (!s[j])
			return ((char *)b);
		j = 0;
		b++;
>>>>>>> ee8f5868f4273166751623ae067974a646d739f0
	}
	return (NULL);
}
