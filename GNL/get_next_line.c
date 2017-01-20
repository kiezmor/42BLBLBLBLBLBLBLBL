#include "get_next_line.h"

static int				ft_cpy_contents(int const fd, char **stack)
{
	char				*buff;
	char				*temp;
	int					value;

	if (!(buff = ft_strnew(sizeof(*buff) * (BUFF_SIZE + 1))))
		return (-1);
	if ((value = read(fd, buff, BUFF_SIZE)) > 0)
	{
		temp = ft_strjoin(*stack, buff);
		ft_strdel(stack);
		*stack = temp;
	}
	ft_strdel(&buff);
	return (value);
}

int						get_next_line(const int fd, char **line)
{
	static char			*stack;
	char				*line_feed;
	int					value;

	if ((!stack && !(stack = ft_strnew(sizeof(*stack)))) ||
		!line || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	while ((line_feed = ft_strchr(stack, '\n')) == NULL)
	{
		value = ft_cpy_contents(fd, &stack);
		if (value == 0)
		{
			if (ft_strlen(stack) == 0)
				return (0);
			stack = ft_strjoin(stack, "\n");
		}
		if (value < 0)
			return (-1);
		else
			line_feed = ft_strchr(stack, '\n');
	}
	*line = ft_strsub(stack, 0, ft_strlen(stack) - ft_strlen(line_feed));
	stack = ft_strdup(line_feed + 1);
	return (1);
}