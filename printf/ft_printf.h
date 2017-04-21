/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 05:05:53 by vpluchar          #+#    #+#             */
/*   Updated: 2017/04/21 07:37:50 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/includes/libft.h"

# define FLAGS 4
# define MODS 12
# define MOD "0hlqjzt.#-+ "

typedef struct	s_flag
{
	char		*key;
	int			(*ptrfunc)(va_list ap);
}				t_flag;

int				ft_printf(const char *format, ...);

int				ft_checkflag(char *flag, va_list args);
int				ft_checks(char *flag, va_list args);
int				ft_checkmods(char *flag);


char			*ft_fstrsub(char const *s, unsigned int start, size_t len);

int				flag_s(va_list ap);
int				flag_c(va_list ap);
int				flag_d(va_list ap);
int				flag_p(va_list ap);

#endif
