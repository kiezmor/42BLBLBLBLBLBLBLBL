/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 07:09:32 by vpluchar          #+#    #+#             */
/*   Updated: 2017/05/24 19:35:31 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkmods(char *flag)
{
	int	i;
	
	i = 0;
	while (i < MODS)
	{
		if (flag[0] == MOD[i] && flag[1] == MOD[i])
		{
			printf("%s : %c%c\n", "ll or hh", MOD[i], MOD[+1]);
			return (2);
		}
		else if (flag[0] == MOD[i])
		{
			printf("%s : %c\n", "l or h", MOD[i]);
			return (1);
		}
		i++;
	}
	return (0);
}
