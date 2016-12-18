/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reso.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 03:26:01 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/16 05:26:27 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_res(t_piece *list, char **map, int size, int i, int j)
{
	t_piece *tmp;

	tmp = list;
	while (tmp)
	{
		if (!tmp->place)
		{
			while (i <= size - tmp->h)
			{
				while (j <= size - tmp->l)
				{
					if (map[i][j] == '.')
						if (ft_tplace(map, tmp, size, i, j))
						{
							if(!ft_res(list, map, size, 0, 0))
							{
								ft_tplace(map, tmp, size, i, j);
						ft_displaytab(map, size);
							}
							else
								return (1);
						}
					j++;
				}
			j = 0;
				i++;
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
		if (!piece->place)
			piece->place = 1;
		else
			piece->place = 0;
		return (1);
	}
	return (0);
}
