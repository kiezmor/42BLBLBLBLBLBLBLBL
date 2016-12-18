/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:51:40 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/23 19:26:32 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			size++;
			j++;
		}
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		m;
	int		size;
	char	*str;

	size = ft_size(argc, argv);
	str = (char*)malloc(sizeof(*str) * size + 1);
	i = 1;
	m = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[m++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[m++] = '\n';
		i++;
	}
	str[m] = '\0';
	return (str);
}
