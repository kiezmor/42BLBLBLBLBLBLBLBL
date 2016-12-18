/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 07:27:09 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/18 00:03:53 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[b] != '\0')
	{
		while (str[b + a] == to_find[a])
		{
			a++;
			if (to_find[a] == '\0')
				return (&str[b]);
		}
		b++;
		a = 0;
	}
	return (0);
}
