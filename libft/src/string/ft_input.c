/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/18 19:29:07 by gsimeon           #+#    #+#             */
/*   Updated: 2016/05/18 20:35:34 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_input(const char *str)
{
	size_t	len;

	len = ft_strlen(str);
	while (len--)
	{
		if (*(str + len) == '/' && len && *(str + len - 1) != '\\')
			return (ft_strdup(str + len + 1));
	}
	return (ft_strdup(str));
}
