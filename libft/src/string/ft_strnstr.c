/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 22:06:05 by gsimeon           #+#    #+#             */
/*   Updated: 2016/10/17 11:01:00 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s;
	size_t	i;

	s = ft_strdup(s1);
	s[n] = '\0';
	if (ft_strstr(s, s2) == NULL)
		return (NULL);
	i = ft_strlen(s) - ft_strlen(ft_strstr(s, s2));
	return ((char *)(unsigned long)(s1 + i));
}
