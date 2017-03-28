/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 05:05:24 by vpluchar          #+#    #+#             */
/*   Updated: 2017/03/28 05:32:25 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/includes/libft.h"

t_flag g_flag_tab[] =
{
	{"c", &flag_c},
	{"d", &flag_d},
	{"p", &flag_p},
	{"s", &flag_s},
	{"lc", &flag_lc},
};

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
			res += ft_checkflag((char *)++format, args);
			// ft_putnbr(++res);
			format++;
			ft_putchar(format[0]);
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

// int			ft_checkmod()
// {
	
// }

int			ft_checkflag(char *flag, va_list args)
{
	char	*pf_flag;
	int		i;

	i = 0;
	pf_flag = ft_strnew(ft_strlen(flag));
	ft_strcpy(pf_flag, flag);

	if (pf_flag[0] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	while (i < FLAGS)
	{
		if (ft_strcmp(ft_strsub(pf_flag, 0, 1), g_flag_tab[i].key) == 0)
			return (g_flag_tab[i].ptrfunc(args));
		i++;
	}

// 	int		i;
// 	char	*st_flag;

// 	st_flag = ft_strnew(1);
// 	st_flag[0] = flag;
// 	i = 0;
// 	if (flag == '%')
// 	{
// 		ft_putchar(flag);
// 		return (1);
// 	}
// 	while (i < NB_FLAG)
// 	{
// 		printf("-{%s}-", st_flag);
// 		if (ft_strcmp(st_flag, g_flag_tab[i].key) == 0)
// 			return (g_flag_tab[i].ptrfunc(args));
// 		i++;
// 	}

	ft_putstr("[Unknown command: %]");
	ft_putendl(pf_flag);
	return (0);
}
