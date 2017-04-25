/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/18 18:46:23 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/24 20:16:01 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// char	*ft_fstrsub(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	char	*tmp;
// 	char	*t;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	if (!(tmp = ft_strnew(len)))
// 		return (NULL);
// 	while (i < len)
// 		*(tmp + i++) = *(s + start++);
// 	t = tmp;
// 	free(tmp);
// 	return (t);
// }

// int			ft_checks(char *flag, va_list args)
// {
// 	int		i;

// 	i = 0;
// 	// printf("]][%c][[\n", flag[0]);
// 	++flag;
// 	if (flag[0] == '%')
// 	{
// 		ft_putchar('%');
// 		return (1);
// 	}
// 	if (ft_checkmods(flag))
// 		return (ft_checkflag(++flag, args));
// 	// while (i < MODS)
// 	// {
// 	// 	printf("{%c}", MOD[i]);
// 	// 	printf("}%s{\n", ft_fstrsub(flag, 0, 1));
// 	// 	// if (ft_strcmp(ft_fstrsub(flag, 0, 1), ft_fstrsub(MOD, 0, 1)) == 0)
// 	// 	// {
// 	// 	// 	// ft_printf("%s\n", &MOD[i]);
// 	// 	// 	return (i);
// 	// 	// 	return (g_flag_tab[i].ptrfunc(args));
// 	// 	// }
// 	// 	if (flag[0] == MOD[i]) 
// 	// 		printf("[MOD%c]\n", MOD[i]);
// 	// 	else
// 	// 		return (ft_checkflag(&flag[1], args));
// 	// 	i++;
// 	// }
// 	// printf("[Unknown command: %%%c]\n", flag[0]);
// 	// ft_putstr("[Unknown command: %]");
// 	// ft_putendl(flag[0]);
// 	return (ft_checkflag(flag, args));
// }

// int			ft_checkflag(char *flag, va_list args)
// {
// 	int		i;
// 	// int		j;

// 	// j = 0;
// 	i = 0;
// 	// ++flag;
// 	// ft_putchar(flag[0]);
// 	// ft_putchar(MOD[j]);
// 	// if (ft_strcmp(ft_strsubn(flag, 0, 1), &MOD[j]) == 0)
// 	// {
// 	// 	ft_putstr(&MOD[j]);
// 	// 	j++;
// 	// }
// 	if (flag[0] == '%')
// 	{
// 		ft_putchar('%');
// 		return (1);
// 	}
// 	while (i < FLAGS)
// 	{
// 		// printf("{}%s{\n", ft_fstrsub(flag, 0, 1));
// 		// printf("%s\n", g_flag_tab[i].key);
// 		if (ft_strcmp(ft_fstrsub(flag, 0, 1), g_flag_tab[i].key) == 0)
// 			return (g_flag_tab[i].ptrfunc(args));
// 		i++;
// 	}

// // 	int		i;
// // 	char	*st_flag;

// // 	st_flag = ft_strnew(1);
// // 	st_flag[0] = flag;
// // 	i = 0;
// // 	if (flag == '%')
// // 	{
// // 		ft_putchar(flag);
// // 		return (1);
// // 	}
// // 	while (i < NB_FLAG)
// // 	{
// // 		printf("-{%s}-", st_flag);
// // 		if (ft_strcmp(st_flag, g_flag_tab[i].key) == 0)
// // 			return (g_flag_tab[i].ptrfunc(args));
// // 		i++;
// // 	}
// 	ft_putstr("]Unknown command: %[");
// 	// printf("%s\n", flag);
// 	// ft_putendl(++flag);
// 	return (0);
// }
