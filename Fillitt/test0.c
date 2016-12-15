/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/14 05:01:41 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_detect(char **tab)
{
	t_piece	*res;

	res = ft_d00(tab, '#');
	res->place = 0;
//	ft_putstr("type -->");
//	ft_putnbr(res->type);
//	ft_putstr("\n\n");
	return (res);
}

t_piece	*ft_d00(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;

//		ft_putstr("test type 0\n");
	while (i < 4)
	{
		while (j < 4 && p[j][i] == c)
			j++;
		if (j == 4)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 0;
			maillon->l = 1;
			maillon->h = 4;
			maillon->next = NULL;
			return (maillon);
		}
		i++;
		j = 0;
	}
	return (ft_d01(p, c));
}

t_piece	*ft_d01(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
	maillon = NULL;
//		ft_putstr("test type 1\n");
	while (i < 4)
	{
		while (j < 4 && p[i][j] == c)
			j++;
		if (j == 4)
		{
			maillon = malloc(sizeof(t_piece));
			maillon->type = 1;
			maillon->l = 4;
			maillon->h = 1;
			maillon->next = NULL;
			return (maillon);
		}
		i++;
		j = 0;
	}
	return (ft_d02(p, c));
}

t_piece	*ft_d02(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
//		ft_putstr("test type 2\n");
	while (j < 3)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j][i + 1] == c &&
					p[j + 1][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 2;
				maillon->l = 2;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d03(p, c));
}

t_piece	*ft_d03(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

//		ft_putstr("test type 3\n");
	i = 0;
	j = 0;
	while (j < 3)
	{
		while (i < 2)
		{
			if (p[j][i] == c && p[j][i + 1] == c && p[j][i + 2] == c &&
					p[j + 1][i + 2] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 3;
				maillon->l = 2;
				maillon->h = 2;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
		i = 0;
	}
	return (ft_d04(p, c));
}