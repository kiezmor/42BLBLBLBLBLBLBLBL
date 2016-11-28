/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 03:59:31 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/22 04:27:44 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		tmp[i] = f(s[i]);
		i++;
	}
	tmp[i] = 0;
	return (tmp);
}
