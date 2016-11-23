/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 00:06:58 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/23 04:04:05 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (tmp != NULL)
	{
		ft_strcpy(tmp, s2);
		ft_strcat(tmp, s2);
	}
	return (tmp);
}

int	main(void)
{
	char		*ret;

	ft_strjoin(NULL, NULL);
	ft_strjoin(NULL, "");
	ft_strjoin("", NULL);
	ret = ft_strjoin("Hello ", "boys");
	if (strcmp(ret, "Hello boys") != 0)
	{
		printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0);
		free(ret);
		return (0);
	}
	free(ret);
	ret = ft_strjoin("", "boys");
    if (strcmp(ret, "boys") != 0)
    {
		printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0);
        free(ret);
        return (0);
    }
    free(ret);
	ret = ft_strjoin("Hello ", "");
    if (strcmp(ret, "Hello ") != 0)
    {
		printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0);
        free(ret);
        return (0);
    }
    free(ret);
	ret = ft_strjoin("", "");
    if (strcmp(ret, "") != 0)
    {
		printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0);
        free(ret);
        return (0);
    }
    free(ret);
	return (1);
}
