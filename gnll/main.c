/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 16:58:14 by vpluchar          #+#    #+#             */
/*   Updated: 2017/02/11 03:49:36 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	int		i;
	char	*line;

	if (ac > 1)
		fd = open(av[1], O_RDONLY);
	else
		fd = 0;
	while ((i = get_next_line(fd, &line)) > 0)
	{
		printf("%s\n", line);
	}
	return (0);
}
