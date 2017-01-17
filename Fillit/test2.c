/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/19 06:17:55 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_d09(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (j < 2)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i + 1] == c &&
					p[j + 2][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 9;
				maillon->l = 2;
				maillon->h = 3;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d10(p, c));
}

t_piece	*ft_d10(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 1;
	j = 0;
	while (j < 2)
	{
		while (i < 4)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i - 1] == c &&
					p[j + 2][i - 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 10;
				maillon->l = 1;
				maillon->h = 3;
				return (maillon);
			}
			i++;
		}
		i = 1;
		j++;
	}
	return (ft_d11(p, c));
}

t_piece	*ft_d11(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (j < 3)
	{
		while (i < 2)
		{
			if (p[j][i] == c && p[j][i + 1] == c && p[j][i + 2] == c &&
					p[j + 1][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 11;
				maillon->l = 3;
				maillon->h = 2;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d12(p, c));
}

t_piece	*ft_d12(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	while (j < 2)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 2][i] == c &&
					p[j + 1][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 12;
				maillon->l = 2;
				maillon->h = 3;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d13(p, c));
}

t_piece	*ft_d13(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 1;
	j = 0;
	while (j < 3)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i + 1] == c &&
					p[j + 1][i - 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 13;
				maillon->l = 2;
				maillon->h = 2;
				return (maillon);
			}
			i++;
		}
		i = 1;
		j++;
	}
	return (ft_d14(p, c));
}
