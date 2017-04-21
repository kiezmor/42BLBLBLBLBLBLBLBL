/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 04:13:21 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/21 04:34:07 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check(char *s1, int i)
{
	int	a;

	a = 0;
	while (a < i)
	{
		if (s1[a] == s1[i])
			return (0);
			++a;
	}
	return (1);
}

void	inter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_check(s1, i))
		{
			while (*s2)
			{
				if (s1[i] == *s2++)
				{
					write(1, s2 - 1 , 1);
					break;
				}
			}
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
