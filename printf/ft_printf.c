/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 05:05:24 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/21 09:47:15 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	int			i;
	va_list		args;
	int			res;

	i = 0;
	res = 0;
	va_start(args, format);
	
	// while (format[i])
	// {
	// 	if (format[i] == '%' && format[i])
	// 	{
	// 		i++;
	// 		comp += ft_checkflag(format[i], args);
	// 	}
	// 	else
	// 	{
	// 		ft_putchar(format[i]);
	// 		comp++;
	// 	}
	// 	i++;
	// }

	while (*format)
	{
		if (format[0] == '%' && format)
		{
			res += ft_checks((char *)format, args);
			// printf("BITE:%c\n", format[0]);
			format++;
		}
		else if (*format)
		{
			while (format != ' ')
				format++;
		}
		format++;
	}

	// while (*format)
	// {
	// 	ft_putstr(format);
	// 	format++;
	// }
	// if (!*format)
	// {
	// 	ft_putstr("kek\n");
	// 	return (0);
	// }

	va_end(args);
	return (res);
}
