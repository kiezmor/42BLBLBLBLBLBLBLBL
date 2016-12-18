/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 00:08:39 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/19 01:09:39 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int main(int argc, char **argv)
{
	int v;
	int p;

	v = argc -1;
	while (v > 0)
	{
		p = 0;
		while (argv[v][p])
		{
			ft_putchar(argv[v][p]);
			p++;
		}
		ft_putchar('\n');
		v--;
	}
}
