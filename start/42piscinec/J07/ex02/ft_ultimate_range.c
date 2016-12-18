/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 03:56:00 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/24 00:01:20 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		v;

	if (min >= max)
		*range = NULL;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		*range = NULL;
	if (tab == NULL)
		return (0);
	v = 0;
	while (min < max)
	{
		tab[v] = min;
		min++;
		v++;
	}
	*range = tab;
	return (v);
}
