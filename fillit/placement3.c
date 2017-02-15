/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/18 02:25:03 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_p14(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 14)
		return (ft_p15(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (j)
		if (tab[i + 1][j] == t && tab[i + 2][j] == t && tab[i + 1][j - 1] == t)
		{
			tab[i][j] = p;
			tab[i + 1][j] = p;
			tab[i + 1][j - 1] = p;
			tab[i + 2][j] = p;
			return (1);
		}
	return (0);
}

int		ft_p15(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 15)
		return (ft_p16(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i + 1][j] == t && tab[i + 2][j] == t && tab[i + 2][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i + 2][j + 1] = p;
		return (1);
	}
	return (0);
}

int		ft_p16(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 16)
		return (ft_p17(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (j)
		if (tab[i + 1][j] == t && tab[i + 2][j] == t && tab[i + 2][j - 1] == t)
		{
			tab[i][j] = p;
			tab[i + 1][j] = p;
			tab[i + 2][j] = p;
			tab[i + 2][j - 1] = p;
			return (1);
		}
	return (0);
}

int		ft_p17(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 17)
		return (ft_p18(tab, i, j, piece));
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i][j + 1] == t && tab[i + 1][j + 1] == t && tab[i + 2][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i][j + 1] = p;
		tab[i + 1][j + 1] = p;
		tab[i + 2][j + 1] = p;
		return (1);
	}
	return (0);
}

int		ft_p18(char **tab, int i, int j, t_piece *piece)
{
	char t;
	char p;

	if (piece->type != 18)
		return (0);
	t = ft_diez(piece);
	p = ft_dot(piece);
	if (tab[i + 1][j] == t && tab[i + 2][j] == t && tab[i][j + 1] == t)
	{
		tab[i][j] = p;
		tab[i + 1][j] = p;
		tab[i + 2][j] = p;
		tab[i][j + 1] = p;
		return (1);
	}
	return (0);
}
