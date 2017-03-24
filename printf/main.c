/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 05:05:43 by vpluchar          #+#    #+#             */
/*   Updated: 2017/03/21 02:10:42 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include "./libft/includes/libft.h"

int	main(void)
{
	char	*str;
	char	c;
	int		i;

	str = "Hello";
	c = '!';
	i = 100;
	ft_printf("%s world.\n%d %% same %c\n %s\n", str, i, c, "try");
	printf("%s world.\n%d %% same %c\n %s\n", str, i, c, "try");
	return (0);
}
