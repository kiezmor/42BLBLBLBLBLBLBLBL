/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 01:30:52 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/19 06:50:00 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *tmp;

	if (!(tmp = malloc(sizeof(char) * n + 1)))
		return (NULL);
	ft_strlcpy(tmp, s, n + 1);
	return (tmp);
}
