/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:21:07 by vpluchar          #+#    #+#             */
/*   Updated: 2017/03/08 08:32:04 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

// void	s(const char *s, va_list ap)
// {
// 	if (s == 's')
// 		printf("%s\n", va_arg(ap, char *));
// }

void		ft_printf(const char * restrict fmt, ...)
{
	va_list ap, ap2;
	int		i;

	i = 0;
	va_start(ap, fmt);
	va_copy(ap2, ap);
	printf("fmt start|%s|\n", fmt);
	while (*fmt)
	{
		printf("fmt 1|%s|\n", fmt);
		while (*fmt != '%' && *fmt)
			++fmt;
		printf("fmt 2|%s|\n", fmt);
		if (*fmt == '%')
		{
			++fmt;
			printf("fmt 3|%s|\n", fmt);
			while (*fmt != '%' && *fmt)
			{
				++fmt;
				++i;
			}
			printf("i |%d|\n", i);
			if (i == 2)
			{
				printf("fmt 4|%s|\n", fmt);
				printf("|%s|\n", "stock2char()");
				++fmt;
			}
			else
			{
				printf("fmt 5|%s|\n", fmt);
				printf("|%s|\n", "stock1char()");
				++fmt;
			}
		}
	}

		// if (strcmp(fmt, "%s"))
		// 	printf("%s", va_arg(ap, char *));
		// else (strcmp(fmt, "%c"));
		// 	printf("%c", va_arg(ap, int));
	va_end(ap);
	va_end(ap2);
}

int	main()
{
	printf("|%s%c|\n", "te", 'c');
	ft_printf("%s%c%ab", "te", 'c');
}
