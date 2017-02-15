/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 03:58:26 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/19 06:21:19 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tet	ft_readtet(int fd)
{
	t_tet	tetri;

	tetri.buff = malloc(sizeof(char *) * BUFF_S + 1);
	tetri.size = read(fd, tetri.buff, BUFF_S);
	tetri.buff[(int)tetri.size] = '\0';
	return (tetri);
}

t_piece	*ft_input(int fd)
{
	t_piece	*list;
	t_piece	*tmp;
	t_tet	tetri;

	tetri.i = 0;
	tmp = NULL;
	list = NULL;
	tetri = ft_readtet(fd);
	while (tetri.size >= 20 && tetri.i < 25 && (tmp = ft_tetvalid(tetri.buff)))
	{
		if (tetri.size == 21)
			list = ft_ladd(list, tmp);
		else if (tetri.size == 20)
		{
			free(tetri.buff);
			list = ft_ladd(list, tmp);
			return (list);
		}
		else
			return (NULL);
		free(tetri.buff);
		tetri = ft_readtet(fd);
		tetri.i++;
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	int fd;

	if (ac != 2)
		ft_putstr("usage : ./fillit source_file\n");
	else
	{
		if (!(fd = open(av[1], O_RDONLY)))
		{
			ft_putstr("error\n");
			return (0);
		}
		ft_fillit(fd);
	}
	return (0);
}

void	ft_fillit(int fd)
{
	t_piece	*list;
	int		size;
	char	**map;

	if (!(list = ft_input(fd)))
	{
		ft_putstr("error\n");
		return ;
	}
	size = ft_opt_size(list);
	ft_listletter(list);
	while (1)
		if (!ft_res2(list, (map = ft_newmap(size)), size))
		{
			free(map);
			size++;
			ft_list_raz(list);
		}
		else
		{
			ft_displaytab(map, size);
			ft_listdel(list);
			return ;
		}
}
