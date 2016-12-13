/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reso.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 03:26:01 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/13 07:46:11 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_res(t_piece *list, char **map, int size)
{
	int		i;
	t_piece *tmp;

	tmp = list;
	i = 0;
	while (tmp)
	{
		if (!tmp->place)
		{
			ft_putnbr(tmp->type);
			ft_putstr("pas place\n");
			if (ft_tplace(map, tmp, size))
			{
				if(!ft_res(list, map, size))
					return (0);
				ft_tplace(map, tmp, size);
			}
		}
		tmp = tmp->next;
	}
	return (0);
}

int		ft_tplace(char **map, t_piece *piece, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;

	//	while (j <= size - piece->l)
	//	{
	//		while (i <= size - piece->h)
	//		{
	//			if (map[i][j] == '.')
	if (ft_p00(map, 0, 0, piece, size))
	{
		ft_putnbr(piece->type);
		ft_putstr("place = 1\n");
		ft_displaytab(map, size);
		if (!piece->place)
			piece->place = 1;
		else
			piece->place = 0;
		return (1);
	}
	//			i++;
	//		}
	//		j++;
	//	}
	return (0);
}
