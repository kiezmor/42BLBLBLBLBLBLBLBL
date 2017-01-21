/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 01:46:28 by vpluchar          #+#    #+#             */
/*   Updated: 2017/01/21 00:59:37 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int				process(int const fd, char **stack)
{
	char				*buff;
	char				*tmp;
	int					i;

	if (!(buff = ft_strnew(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	if ((i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		tmp = ft_strjoin(*stack, buff);
		ft_strdel(stack);
		*stack = tmp;
	}
	ft_strdel(&buff);
	return (i);
}

int						get_next_line(const int fd, char **line)
{
	static char			*stack;
	char				*line_feed;
	int					i;

	if ((!stack && !(stack = ft_strnew(sizeof(*stack)))) ||
		!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	while ((line_feed = ft_strchr(stack, '\n')) == NULL)
	{
		i = process(fd, &stack);
		if (i == 0)
		{
			if (ft_strlen(stack) == 0)
				return (0);
			stack = ft_strjoin(stack, "\n");
		}
		if (i < 0)
			return (-1);
		else
			line_feed = ft_strchr(stack, '\n');
	}
	*line = ft_strsub(stack, 0, ft_strlen(stack) - ft_strlen(line_feed));
	stack = ft_strdup(line_feed + 1);
	return (1);
}
