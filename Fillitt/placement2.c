/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placement0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 06:16:06 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/16 01:18:46 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_p09(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	if (piece->type != 9)
		return (ft_p10(tab, i, j, piece, size));
	t = ft_diez(piece);
	p = ft_dot(piece);
//	while (j <= size - piece->l)
//	{
//		while (i <= size - piece->h)
//		{
			if (tab[i][j] == t && tab[i + 1][j] == t && tab[i + 1][j + 1] == t && tab[i + 2][j + 1] == t)
			{
				tab[i][j] = p;
				tab[i + 1][j] = p;
				tab[i + 1][j + 1] = p;
				tab[i + 2][j + 1] = p;
				return (1);
			}
//			i++;
//		}
//		j++;
//		i = 0;
//	}
	return (0);
}

int		ft_p10(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	if (piece->type != 10)
		return (ft_p11(tab, i, j, piece, size));
	t = ft_diez(piece);
	p = ft_dot(piece);
//	while (j <= size - piece->l)
//	{
//		while (i <= size - piece->h && j)
//		{
//	if (j)
			if (tab[i][j] == t && tab[i + 1][j] == t && tab[i + 1][j - 1] == t && tab[i + 2][j - 1] == t)
			{
				tab[i][j] = p;
				tab[i + 1][j] = p;
				tab[i + 1][j - 1] = p;
				tab[i + 2][j - 1] = p;
				return (1);
			}
//			i++;
//		}
//		j++;
//		i = 0;
//	}
	return (0);
}

int		ft_p11(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	if (piece->type != 11)
		return (ft_p12(tab, i, j, piece, size));
	t = ft_diez(piece);
	p = ft_dot(piece);
//	while (j < size - piece->l)
//	{
//		while (i < size - piece->h)
//		{
			if (tab[i][j] == t && tab[i][j + 1] == t && tab[i][j + 2] == t && tab[i + 1][j + 1] == t)
			{
				tab[i][j] = p;
				tab[i][j + 1] = p;
				tab[i][j + 2] = p;
				tab[i + 1][j + 1] = p;
				return (1);
			}
//			i++;
//		}
///		j++;
//		i = 0;
//	}
	return (0);
}

int		ft_p12(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	if (piece->type != 12)
		return (ft_p13(tab, i, j, piece, size));
	t = ft_diez(piece);
	p = ft_dot(piece);
//	while (j <= size - piece->l)
//	{
//		while (i <= size - piece->h)
//		{
			if (tab[i][j] == t && tab[i + 1][j + 1] == t && tab[i + 1][j] == t && tab[i + 2][j] == t)
			{
				tab[i][j] = p;
				tab[i + 1][j + 1] = p;
				tab[i + 1][j] = p;
				tab[i + 2][j] = p;
				return (1);
			}
//			i++;
//		}
//		j++;
//		i = 0;
//	}
	return (0);
}

int		ft_p13(char **tab, int i, int j, t_piece *piece, int size)
{
	char t;
	char p;

	if (piece->type != 13)
		return (ft_p14(tab, i, j, piece, size));
	t = ft_diez(piece);
	p = ft_dot(piece);
//	while (j <= size - piece->l)
//	{
//		while (i <= size - piece->h && j)
//		{
			if (tab[i][j] == t && tab[i + 1][j + 1] == t && tab[i + 1][j] == t && tab[i + 1][j - 1] == t)
			{
				tab[i][j] = p;
				tab[i + 1][j + 1] = p;
				tab[i + 1][j] = p;
				tab[i + 1][j - 1] = p;
				return (1);
			}
//			i++;
//		}
///		j++;
//		i = 0;
//	}
	return (0);
}
