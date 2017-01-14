/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 16:58:14 by vpluchar          #+#    #+#             */
/*   Updated: 2017/01/12 20:00:47 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"

int	main(int ac, char **av)
{
	int		fd;
	char	*line;

	if (ac > 1)
		fd = open(av[1], O_RDONLY);
	else
		fd = 0;
	while (get_next_line(fd, &line) > 0)
		printf("%s\n", line);
	return (0);
}
