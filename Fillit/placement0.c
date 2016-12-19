/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/18 04:23:39 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_p00(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 0)
		return (ft_p01(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i + 1][j] == t && tab[i + 2][j] == t && tab[i + 3][j] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i + 3][j] = p;
		return (1);
	}
	return (0);
}

int		ft_p01(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 1)
		return (ft_p02(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i][j + 1] == t && tab[i][j + 2] == t && tab[i][j + 3] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i][j + 2] = p;
		tab[i][j + 3] = p;
		return (1);
	}
	return (0);
}

int		ft_p02(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 2)
		return (ft_p03(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i][j + 1] == t && tab[i + 1][j] == t && tab[i + 1][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j] = p;
		tab[i + 1][j + 1] = p;
		return (1);
	}
	return (0);
}

int		ft_p03(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 3)
		return (ft_p04(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i][j + 1] == t && tab[i][j + 2] == t && tab[i + 1][j + 2] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i][j + 2] = p;
		tab[i + 1][j + 2] = p;
		return (1);
	}
	return (0);
}
