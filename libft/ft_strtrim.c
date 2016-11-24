/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:24:36 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/24 04:26:22 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*tmp;
	size_t	i;
	size_t	v;

	i = 0;
	v = -1;
	if (!(tmp = (char *)malloc(sizeof(*tmp) * (ft_strlen(s + 1)))))
		return (NULL);
	if (s)
	{
		while (ft_isspace(s[v]) == 1)
			v++;
		while (*s != '\0')
			tmp[i++] = *s++;
		tmp[i] = '\0';
		while (ft_isspace(tmp[i - 1]) == 1)
		{
			tmp[i - 1] = '\0';
			i--;
		}
	}
	printf("%s", tmp);
	return (tmp);
}

int					main(void)
{

	if (strcmp(ft_strtrim("  \t Fat B at  \t\n\n"), "Fat B at") == 0)
		printf("ft_strtrim:\t\tOK\n");
	else
		printf("ft_strtrim:\t\tFAIL\n");

	char			str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
	char			str2[] = "Bonjour";
	char			str3[] = "  \t\t\t   ";
	char			*r;

	// ft_strtrim(NULL);
	r = ft_strtrim(str);
	if (strcmp(r, "Bon\t \njour"))
	{
		printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t    \t\nBon\t \njour\t\n  \n     \").\nExpected ret = \"Bon\t \njour\" \
			   but have ret = \"%s\"\033[0m\n", __LINE__ - 2, __func__, r);
		return (0);
	}
	r = ft_strtrim(str2);
    if (strcmp(r, "Bonjour") || (str2 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"Bonjour\").\nExpected ret = \"Bonjour\" and differents pointers\
			   but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str2, r);
        return (0);
    }
	r = ft_strtrim(str3);
    if (strcmp(r, "") || (str3 == r))
    {
        printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t\t\t  \").\nExpected ret = \"\" and different\
s pointers but have ret = \"%s\" and our: %p / your: %p\033[0m\n", __LINE__ - 2, __func__, r, str3, r);
        return (0);
    }
	return (1);
}

// int	main(void)
// {
// 	char			str[] = "  \t    \t\nBon\t \njour\t\n  \n     ";
// 	char			*r;

// 	r = ft_strtrim(str);
//  	if (strcmp(r, "Bon\t \njour"))
//  	{
//  		printf("Error Line %d, Funct %s : \n\033[31mft_strstrim(\"  \t    \t\nBon\t \njour\t\n  \n     \").\nExpected ret = \"Bon\t \njour\" \
// 			   but have ret = \"%s\"\033[0m\n", __LINE__ - 2, __func__, r);
// 		free(r);
//  		return (0);
//  	}
//  	free(r);
// }
