/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 09:56:13 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/08 11:06:23 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_display(int a, int b)
{
	if (a >= 10)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(a + 48);
	}
	ft_putchar(' ');
	if (b >= 10)
	{
		ft_putchar(b / 10 + 48);
		ft_putchar(b % 10 + 48);
	}
	else
	{
		ft_putchar(48);
		ft_putchar(b + 48);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			if (a < b)
			{
				ft_display(a, b);
			}
			if ((a != 98 || b != 99) && a < b)
			{
				ft_putchar(44);
				ft_putchar(' ');
			}
			b++;
		}
		a++;
		b = 0;
	}
}
