/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 01:10:13 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/19 05:24:52 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_print(char *ar)
{
	int i;

	i = 0;
	while (ar[i] != '\0')
	{
		ft_putchar(ar[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int v;

	v = 0;
	while (v < argc -1)
	{
		if (ft_strcmp(argv[v], argv[v + 1]) > 0)
		{
			ft_swap(&argv[v], &argv[v + 1]);
			v = 1;
		}
		else
			v++;
	}
	v = 1;
	while (v < argc)
	{
		ft_print(argv[v]);
		ft_putchar('\n');
		v++;
	}
}
