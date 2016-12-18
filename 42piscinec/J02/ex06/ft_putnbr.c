/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 04:17:22 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/07 15:23:00 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <limits.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int time;
	int size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	time = nb;
	while ((time /= 10) > 0)
		size *= 10;
	time =nb;
	while (size)
	{
		ft_putchar((char)((time / size)) +48);
		time %= size;
		time /= 10;
	}
}
