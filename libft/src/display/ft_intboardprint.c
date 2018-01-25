/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intboardprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/01 22:35:31 by gsimeon           #+#    #+#             */
/*   Updated: 2016/05/01 22:40:16 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_intboardprint(int **tab, int x, int y)
{
	int		i;
	int		j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_putnbr(tab[j][i]);
			ft_putstr("  ");
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
