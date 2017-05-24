/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_works.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:17:22 by vpluchar          #+#    #+#             */
/*   Updated: 2017/05/24 18:23:38 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag g_flag_tab[] =
{
	{"cC", &flag_c},
	{"id", &flag_d},
	{"p", &flag_p},
	{"sS", &flag_s},
};

int			ft_checkf(char flag, va_list args)
{
	int		i;

	i = 0;
	if (flag == '%')
	{
		ft_putchar('%');
		return (1);
	}
	while (i < FLAGS)
	{
		if (ft_strchr(g_flag_tab[i].key, flag) != 0)
			return (g_flag_tab[i].ptrfunc(args));
		i++;
	}
	ft_putstr("Unknown command: %");
	ft_putchar(flag);
	return (0);
}
