/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:58:20 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/05 18:25:53 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int		main(int argc, char **argv)
{
	int	v;

	if (argc != 2)
	{
		if (argc > 2)
			ft_putstr("Too many arguments.\n");
		if (argc < 2)
			ft_putstr("File name missing.\n");
		return (1);
	}
	v = open(argv[1], O_RDONLY);
	ft_display(v);
	close(v);
	return (0);
}
