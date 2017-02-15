/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reso.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 03:26:01 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/18 06:50:29 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_res2(t_piece *list, char **map, int size)
{
	t_map coord;

	coord.i = 0;
	coord.j = 0;
	coord.tmp = list;
	return (ft_res(list, map, size, coord));
}

int		ft_res(t_piece *list, char **map, int size, t_map coord)
{
	while (coord.tmp)
	{
		if (!coord.tmp->place)
			while (coord.i <= size - coord.tmp->h)
			{
				while (coord.j <= size - coord.tmp->l)
				{
					if (map[coord.i][coord.j] == '.')
						if (ft_tplace(map, coord.tmp, coord.i, coord.j))
						{
							if (!ft_res2(list, map, size))
								ft_tplace(map, coord.tmp, coord.i, coord.j);
							else
								return (1);
						}
					coord.j++;
				}
				coord.j = 0;
				coord.i++;
			}
		coord.tmp = coord.tmp->next;
	}
	return (ft_allpl(list));
}

int		ft_tplace(char **map, t_piece *piece, int i, int j)
{
	if (ft_p00(map, i, j, piece))
	{
		if (!piece->place)
			piece->place = 1;
		else
			piece->place = 0;
		return (1);
	}
	return (0);
}

char	ft_dot(t_piece *piece)
{
	if (piece->place)
		return ('.');
	else
		return (piece->letter);
}

char	ft_diez(t_piece *piece)
{
	if (!piece->place)
		return ('.');
	else
		return (piece->letter);
}
