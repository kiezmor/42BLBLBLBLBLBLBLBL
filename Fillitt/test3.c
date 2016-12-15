/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/14 05:00:42 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_d14(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 1;
	j = 0;
//	ft_putstr("test type 14\n");
	while (j < 2)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 1][i - 1] == c &&
					p[j + 2][i] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 14;
				maillon->l = 2;
				maillon->h = 3;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d15(p, c));
}

t_piece	*ft_d15(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 1;
	j = 0;
//	ft_putstr("test type 15\n");
	while (j < 2)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 2][i] == c &&
					p[j + 2][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 15;
				maillon->l = 2;
				maillon->h = 3;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d16(p, c));
}

t_piece	*ft_d16(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 1;
	j = 0;
//	ft_putstr("test type 16\n");
	while (j < 2)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 2][i] == c &&
					p[j + 2][i - 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 16;
				maillon->l = 1;
				maillon->h = 4;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		i = 1;
		j++;
	}
	return (ft_d17(p, c));
}

t_piece	*ft_d17(char **p, char c)
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
			if (p[j][i] == c && p[j][i + 1] == c && p[j + 1][i + 1] == c &&
					p[j + 2][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 17;
				maillon->l = 2;
				maillon->h = 3;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (ft_d18(p, c));
}

t_piece	*ft_d18(char **p, char c)
{
	int		i;
	int		j;
	t_piece	*maillon;

	i = 0;
	j = 0;
//	ft_putstr("test type 18\n");
	while (j < 2)
	{
		while (i < 3)
		{
			if (p[j][i] == c && p[j + 1][i] == c && p[j + 2][i] == c &&
					p[j][i + 1] == c)
			{
				maillon = malloc(sizeof(t_piece));
				maillon->type = 18;
				maillon->l = 2;
				maillon->h = 3;
				maillon->next = NULL;
				return (maillon);
			}
			i++;
		}
		j++;
		i = 0;
	}
	return (NULL);
}
