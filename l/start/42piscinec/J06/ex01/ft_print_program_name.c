/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 23:29:25 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/18 23:38:18 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int v;

	v = 0;
	argc = 0;
	while (argv[0][v])
	{
		ft_putchar(argv[0][v]);
		v++;
	}
	ft_putchar('\n');
	return (0);
}
