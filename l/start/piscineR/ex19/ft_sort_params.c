/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:35:47 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/05 18:21:50 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int v;

	v = 0;
	while (s1[v] == s2[v] && s1[v] != '\0' && s2[v] != '\0')
		v++;
	return (s1[v] - s2[v]);
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main(int ac, char **av)
{
	int v;

	v = 0;
	while (v < ac - 1)
	{
		if (ft_strcmp(av[v], av[v + 1]) > 0)
		{
			ft_swap(&av[v], &av[v + 1]);
			v = 1;
		}
		else
			v++;
	}
	v = 1;
	while (v < ac)
	{
		while (av[v])
			ft_putchar(av[v++]);
		ft_putchar('\n');
		v++;
	}
}
