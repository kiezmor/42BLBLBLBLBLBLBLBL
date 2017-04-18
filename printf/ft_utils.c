/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:46:23 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/18 18:48:37 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strsubn(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;
	char	*t;

	i = 0;
	if (!s)
		return (NULL);
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	while (i < len)
		*(tmp + i++) = *(s + start++);
	t = tmp;
	free(tmp);
	return (t);
}