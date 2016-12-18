/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 23:38:36 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/20 18:37:50 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	v;

	v = 0;
	while (str[v] != '\0')
	{
		if (str[v] >= 'A' && str[v] <= 'Z')
			str[v] += 32;
		v++;
	}
	return (str);
}
