/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 01:46:28 by vpluchar          #+#    #+#             */
/*   Updated: 2017/01/15 00:48:19 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	process(const int fd, char *buff, char *s[fd])
{
	char		*tmp;
	char		*p;
	int			i;

	i = 0;
	p = ft_strchr(s[fd], '\n');
	while (!(p) && (i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[i] = '\0';
		tmp = s[fd];
		s[fd] = ft_strjoin(tmp, buff);
		ft_strdel(&tmp);
		p = ft_strchr(s[fd], '\n');
	}
	if (i == -1)
		return (-1);
	if (i == 0 && !p)
		return (0);
	return (1);
}

int			get_next_line(const int fd, char **line)
{
	static char	*s[256];
	char		*tmp;
	int			i;
	char		buff[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	if (!s[fd])
		s[fd] = ft_strnew(1);
	if ((i = process(fd, buff, &*s)) == -1)
		return (-1);
	if (i == 0)
	{
		*line = s[fd];
		s[fd] = NULL;
		return (0);
	}
	*line = ft_strsub(s[fd], 0, ft_strchr(s[fd], '\n') - s[fd]);
	tmp = s[fd];
	s[fd] = ft_strdup(ft_strchr(s[fd], '\n') + 1);
	ft_strdel(&tmp);
	return (1);
}
