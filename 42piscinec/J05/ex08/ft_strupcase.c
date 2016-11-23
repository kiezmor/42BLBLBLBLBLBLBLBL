/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:42:16 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/20 18:33:15 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int v;

	v = 0;
	while (str[v] != '\0')
	{
		if (str[v] >= 'a' && str[v] <= 'z')
			str[v] -= 32;
		v++;
	}
	return (str);
}