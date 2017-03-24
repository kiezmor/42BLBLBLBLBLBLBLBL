/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 02:06:06 by vpluchar          #+#    #+#             */
/*   Updated: 2017/03/08 04:57:21 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

void foo(char *fmt, ...)
{
	va_list ap, ap2;
	int d;
	char c, *s;

	va_start(ap, fmt);
	va_copy(ap2, ap);
	printf("fmt|%s|\n", fmt);
	printf("fmt+1|%s|\n", fmt + 1);
	printf("fmt+2|%s|\n", fmt + 2);
	printf("fmt+3|%s|\n", fmt + 3);
	while (*fmt)
		switch(*fmt++) {
			case 's':
				s = va_arg(ap, char *);
				printf("string %s\n", s);
				break;
			case 'd':
				d = va_arg(ap, int);
				printf("int %d\n", d);
				break;
			case 'c':
				c = va_arg(ap, int);
				printf("char %c\n", c);
				break;
		}
	va_end(ap);
	va_end(ap2);
}

int	main()
{
	foo("scd", "YOLO", 'c', '1');
	printf("|%s|\n", "End");
	foo("s", "YOLO");
	printf("|%s|\n", "End");
	foo("d", '0');
	printf("|%s|\n", "End");
	foo("c", 'A');
	printf("|%s|\n", "End");
}
