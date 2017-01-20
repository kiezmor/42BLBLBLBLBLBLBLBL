/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 01:46:28 by vpluchar          #+#    #+#             */
/*   Updated: 2017/01/19 11:47:45 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	process(const int fd, char *buff, char *s[fd])
{
	char		*tmp;
	char		*p;
	int			i;
	// char		*t;
	// int			t;
	// int			v;

	// t = 0;
	p = ft_strchr(s[fd], '\n');
	// t = p;
	// if (ft_strlen(s[fd]) != i && !t)
	// {
	// 	t++;

	// }
	// v = ft_strlen(*s);
	// printf("buff %d\n", *buff);
	// t = ft_strchr(s[fd], '\0');
	// if (buff)
	// {
	// 	printf("kek %d\n", t);
	// 	buff[t - 1] = '\n';
	// 	buff[t] = 'o';
	// }
	while (!p && (i = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[i] = '\0';
		// t = ft_strlen(buff);
		// printf("bia|%c|\n", buff[i]);
		// printf("iwh |%d|\n", i);
		if (i < BUFF_SIZE && i > 0)
		{
			buff[i] = '\n';
			// buff[i + 1] = '\0';
			// return (1);
			// tmp = s[fd];
			// s[fd] = ft_strjoin(tmp, buff);
			// ft_strdel(&tmp);
		}
		// printf("bi|%c|\n", buff[i]);
		// printf("buff|%s|\n", buff);
		tmp = s[fd];
		s[fd] = ft_strjoin(tmp, buff);
		ft_strdel(&tmp);
		// if (buff[i] && buff[i + 1] == '\0')// 	buff[i] = '\n';
		// t = ft_strlen(buff);
		
		// else
		// {
		// buff[i] = '\0';
		// }
		
		// printf("buf %s\n", buff);
		// if (buff[i] == '\0' && buff[i] != '\n')
		// {
		// 	buff[i] = '\n';
		//	printf("kek %d\n", t);
		// printf("k%ct\n", buff[i]);
		// }
		p = ft_strchr(s[fd], '\n');
	}
	// p = ft_strchr(s[fd], '\n');
	// if (buff[i] != '\0' && buff[i] == '\n' && i > 1)
	// 	buff[i] = '\0';
	// else
	// 	buff[i] = '\n';
	// if (i > 1 && buff[i] != '\n')
	// {
	// 	buff[i] = '\n';
	// 	p = ft_strchr(s[fd], '\n');
	// 	i = read(fd, buff, BUFF_SIZE);
	// }
	// printf("i %d\n", i);
	// printf("p %s\n", p);
	// printf("t %s\n", t);
	// if (t != 0)
	// 	return (1);
	if (i == -1)
		return (-1);
	if (i == 0 && !p)
		return (0);
	return (1);
}

// int			check(const int fd, char *buff, char *s[fd])
// {
// 	int		i;
// 	while ((i = read(fd, buff, BUFF_SIZE)) > 1)
// 	{
// 		if (i > 1 && buff[i] != '\n')
// 			buff[i] == '\n';
// 	}
// }

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
	// printf("ignl|%d|\n", i);
	// printf("sfd|%s|\n", ft_strchr(s[fd], '\n'));
	*line = ft_strsub(s[fd], 0, ft_strchr(s[fd], '\n') - s[fd]);
	tmp = s[fd];
	s[fd] = ft_strdup(ft_strchr(s[fd], '\n') + 1);
	ft_strdel(&tmp);
	return (1);
}
