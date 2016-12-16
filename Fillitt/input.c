/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 03:58:26 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/16 00:56:46 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_readtet(int fd)
{
	char	*buff;

	if (!(buff = malloc(sizeof(char *) * 22)))
		return (NULL);
	if (read(fd, buff, BUFF_S + 1) >= 20)
		return (buff);
	return (NULL);
}

t_piece	*ft_input(int fd)
{
	t_piece	*list;
	t_piece	*tmp;
	char	*buff;
	int		i;

	tmp = NULL;
	i = 0;
	buff = ft_readtet(fd);
	if ((tmp = ft_tetvalid(buff)))
	{
		list = tmp;
		tmp = NULL;
		while (ft_strlen(buff = ft_readtet(fd)) == 21 && i < 26)
		{
			if ((tmp = ft_tetvalid(buff)))
				ft_ladd(list, tmp);
			else
				return (NULL);
			i++;
		}
		if (ft_strlen(buff) == 20)
		{
			ft_ladd(list,ft_tetvalid(buff));
			return (list);
		}
	}
	return (NULL);
}

int		main(int ac, char **av)
{
	int fd;

	if (ac != 2)
	{
	}
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		ft_fillit(fd);
	}
}

void	ft_fillit(int fd)
{
	t_piece	*list;
	t_piece *tmp;
	int		size;
	char	**map;

	map = NULL;
	list = ft_input(fd);
	size = ft_opt_size(list);
	//	ft_putstr("taille min = ");
	//	ft_putstr(ft_itoa(size));
	//	ft_putchar('\n');
	ft_listletter(list);
	while (1)
	{
		map = ft_newmap(size);
		ft_res(list, map, size);
		if (!ft_allpl(list))
		{
			free(map);
			tmp = list;
			size++;
			while (tmp)
			{
				tmp->place = 0;
				tmp = tmp->next;
			}
		}
		else
		{
			ft_displaytab(map, size);
			return ;
		}
	}
}
