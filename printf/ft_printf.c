/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 05:21:07 by vpluchar          #+#    #+#             */
/*   Updated: 2017/03/15 02:05:09 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"

void		ft_printf(const char * restrict fmt, ...)
{
	va_list ap, ap2;
	int		i;
	char	*tmp;

	i = 0;
	va_start(ap, fmt);
	va_copy(ap2, ap);
	printf("fmt start|%s|\n", fmt);
	while (*fmt)
	{
		
	}
	va_end(ap);
	va_end(ap2);
}

int	main()
{
	printf("|%s%c|\n", "te", 'c');
	ft_printf("%s%c%ab", "te", 'c');
}
