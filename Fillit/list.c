/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 07:32:53 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/19 03:48:30 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_ladd(t_piece *list, t_piece *add)
{
	t_piece *tmp;

	tmp = list;
	if (!list && add)
		return (add);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;
	return (list);
}

void	ft_listdel(t_piece *list)
{
	t_piece *tmp;

	tmp = list;
	while (list)
	{
		tmp = list;
		free(tmp);
		list = list->next;
	}
}

void	ft_list_raz(t_piece *list)
{
	t_piece	*tmp;

	tmp = list;
	while (tmp)
	{
		tmp->place = 0;
		tmp = tmp->next;
	}
}
