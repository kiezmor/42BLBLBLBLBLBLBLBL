/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 03:09:59 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/07 09:49:03 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_displaytab(char **tab, int size)
{
	int i;
	int j;

	i = -1;
	j = -1;
		while (++i < size)
		{
			while (++j < size)
				ft_putchar(tab[i][j]);
			j = -1;
			ft_putchar ('\n');
		}
}
