/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reso.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 03:26:01 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/16 01:20:07 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_res(t_piece *list, char **map, int size)
{
	int		i;
	int j;
	t_piece *tmp;

	tmp = list;
	while (tmp)
	{
		if (!tmp->place)
		{
			j = 0;
			i = 0;
			while (i <= size - tmp->h)
			{
				while (j <= size - tmp->l)
				{
					if (map[i][j] == '.')
						if (ft_tplace(map, tmp, size, i, j))
						{
							if(!ft_res(list, map, size))
								ft_tplace(map, tmp, size, i, j);
							else
								return (1);
//							ft_displaytab(map, size);
						}
					j++;
				}
				i++;
				j = 0;
			}
		}
		tmp = tmp->next;
	}
	if (ft_allpl(list))
		return (1);
	return (0);
}

int		ft_tplace(char **map, t_piece *piece, int size, int i, int j)
{
	if (ft_p00(map, i, j, piece, size))
	{
		//		ft_putnbr(piece->type);
		//		ft_putstr("place = 1\n");
		if (!piece->place)
			piece->place = 1;
		else
			piece->place = 0;
		//		ft_displaytab(map, size);
		//		ft_putchar('\n');
		return (1);
	}
	return (0);
}
