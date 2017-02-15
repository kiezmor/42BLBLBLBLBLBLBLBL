/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/19 06:22:02 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_tetvalid(char *c)
{
	int		i;
	int		hash;
	char	**tab;

	tab = NULL;
	i = 0;
	hash = 0;
	while (i < 20 && c[i] && c)
	{
		if ((c[i] != '#' && c[i] != '.' && c[i] != '\n') ||
				(c[4 + (i * 5)] != '\n' && i < 3))
			return (NULL);
		if (c[i] == '#')
			hash++;
		i++;
	}
	if (hash != 4 || i != 20 || !(c[i] == '\n' || c[i] == '\0'))
		return (NULL);
	tab = ft_strsplit(c, '\n');
	return (ft_detect(tab));
}

int		ft_opt_size(t_piece *list)
{
	int	i;

	i = 1;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	i *= 4;
	while (!ft_sqrt(i))
		i++;
	return (ft_sqrt(i));
}

char	**ft_newmap(int size)
{
	int		i;
	char	**tab;

	i = 0;
	tab = (char **)malloc(sizeof(tab) * size);
	while (i < size)
	{
		tab[i] = malloc(sizeof(*tab) * size);
		ft_memset(tab[i], '.', size);
		i++;
	}
	return (tab);
}

int		ft_allpl(t_piece *list)
{
	while (list)
	{
		if (!list->place)
			return (0);
		list = list->next;
	}
	return (1);
}

void	ft_listletter(t_piece *list)
{
	t_piece	*tmp;
	int		i;

	i = 0;
	tmp = list;
	while (tmp)
	{
		tmp->letter = 'A' + i;
		tmp = tmp->next;
		i++;
	}
}
