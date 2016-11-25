/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 01:42:53 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/25 03:15:37 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*tmp;
	int		neg;

	neg = 0;
	tmp = ft_strnew(12);
	if (n < 0)
		neg = 1;
	while (n != 0)
	{
		if (n < 0)
			*--tmp = '0' - (n % 10);
		else
			*--tmp = '0' + (n % 10);
		n /= 10;
	}
	if (neg)
		*--tmp = '-';
	return (ft_strdup(tmp));
}
