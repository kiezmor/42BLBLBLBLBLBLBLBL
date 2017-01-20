/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 16:58:14 by vpluchar          #+#    #+#             */
/*   Updated: 2017/01/19 12:10:55 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	int		v;

	v = 0;
	if (ac > 1)
		fd = open(av[1], O_RDONLY);
	else
		fd = 0;
	// printf("FD %d\n", fd);
	while (get_next_line(fd, &line) > 0)
	{
		// printf("l |%s|\n", line);
		v++;
		printf("%s\n", line);
	}
	printf("vm|%d|\n", v);
	return (0);
}
