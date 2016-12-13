/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 07:58:11 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/02 09:54:37 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_piece	*ft_is_valid(char *c)
{
	int i;
	int hash;
	char **tab;

	tab = NULL;
	i = 0;
	hash = 0;
	while (i < 20)
	{
		if (c[i] != '#' || c[i] != '.' || c[i] != '\n' || (c[4 + (5 * i)]
					!= '\n' && i < 4))
			return (0);
		if (c[i] == '#')
			hash++;
		i++;
	}
	if (hash != 4)
		return (NULL);
	if (c[i] == '\n' || c[i] == '\0')
		tab = ft_strsplit(c, '\n');
	return (ft_detect(tab));
}
