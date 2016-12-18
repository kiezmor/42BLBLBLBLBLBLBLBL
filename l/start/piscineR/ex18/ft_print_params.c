/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 14:27:17 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/04 14:31:01 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int v;
	int p;

	v = 1;
	while (v < argc)
	{
		p = 0;
		while (argv[v][p])
		{
			ft_putchar(argv[v][p]);
			p++;
		}
		ft_putchar('\n');
		v++;
	}
	return (0);
}
