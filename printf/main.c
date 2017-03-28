/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 05:05:43 by vpluchar          #+#    #+#             */
/*   Updated: 2017/03/28 05:52:20 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "./libft/includes/libft.h"

int	main(void)
{
	char	*str;
	char	ch;
	int		i;

	str = "Hello";
	ch = '!';
	i = 100;
	ft_printf("[%s world.\n%d %% same %c\n %s]\n", str, i, ch, "try");
	// ft_printf("[%lc]\n", c);
	printf("|%s world.\n%d %% same %c\n %s|\n", str, i, ch, "try");
	// printf("|%lc|\n", c);

	printf("%s\n", "------------------------------------------------");

	int		a,b;
	float	c,d;

	a = 15;
	b = a / 2;
	printf("|%d|\n",b);
	printf("|%4d|\n",b);
	printf("|%04d|\n",b);
	c = 15.3;
	d = c / 3;
	printf("|%3.2f|\n",d);

	printf("%s\n", "------------------------------------------------");

	printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %i\n", 1234);
	printf("Float number: |%8.2f|\n", 1234.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("Unsigned value: %u\n", 150);

	printf("%s\n", "------------------------------------------------");

	printf(":%s:\n", "Hello, world!");
	printf(":%15s:\n", "Hello, world!");
	printf(":%.10s:\n", "Hello, world!");
	printf(":%-10s:\n", "Hello, world!");
	printf(":%-15s:\n", "Hello, world!");
	printf(":%.15s:\n", "Hello, world!");
	printf(":%15.10s:\n", "Hello, world!");
	printf(":%-15.10s:\n", "Hello, world!");
	
	return (0);
}
