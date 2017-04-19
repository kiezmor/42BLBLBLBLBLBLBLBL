/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_works.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 19:17:22 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/19 10:10:50 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag g_flag_tab[] =
{
	{"c", &flag_c},
	{"d", &flag_d},
	{"p", &flag_p},
	{"s", &flag_s},
};

int			ft_checkmod(char *flag, va_list args)
{
	int		i;

	i = 0;
	++flag;
	if (flag[0] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	while (i < FLAGS)
	{
		if (ft_strcmp(ft_fstrsub(flag, 0, 1), g_flag_tab[i].key) == 0)
			return (g_flag_tab[i].ptrfunc(args));
		i++;
	}
	ft_putstr("[Unknown command: %]");
	ft_putendl(flag);
	return (0);
}

int			ft_checkflag(char *flag, va_list args)
{
	int		i;
	// int		j;

	// j = 0;
	i = 0;
	++flag;
	if (flag[0] == '%')
	{
		ft_putchar('%');
		return (1);
	}
	// ft_putchar(flag[0]);
	// ft_putchar(MOD[j]);
	// if (ft_strcmp(ft_strsubn(flag, 0, 1), &MOD[j]) == 0)
	// {
	// 	ft_putstr(&MOD[j]);
	// 	j++;
	// }
	while (i < FLAGS)
	{
		if (ft_strcmp(ft_fstrsub(flag, 0, 1), g_flag_tab[i].key) == 0)
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
	ft_putendl(flag);
	return (0);
}