/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 05:05:24 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/25 15:51:59 by vpluchar         ###   ########.fr       */
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
			// printf("VAGIN:%c\n", format[0]);
			// res += ft_checks((char *)format, args);
			// res += ft_checkflag((char *)format, args);
			format++;
			// res += ft_checkflag((char *)format, args);
			if ((i = ft_checkmods((char *)format)) == 2)
				format += 2;
			else if (i == 1)
				format++;
			res += ft_checkf(format[0], args);
			// printf("BITE:%c\n", format[0]);
		}
		else if (*format)
			ft_putchar(format[0]);
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
