/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:24:36 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/25 01:43:20 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	int		endn;
	char	*tmp;

	while (ft_isspace(*s) == 1)
		s++;
	endn = ft_strlen((char *)s) - 1;
	while (ft_isspace(s[endn]) == 1)
		endn--;
	if (!(tmp = ft_strnew(endn + 1)))
		return (NULL);
	ft_strncpy(tmp, s, endn + 1);
	return (tmp);
}
