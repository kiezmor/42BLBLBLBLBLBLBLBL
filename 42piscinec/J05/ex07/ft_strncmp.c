/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 19:04:37 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/21 01:24:35 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	v;

	v = 0;
	while (s1[v] == s2[v] && s1 != '\0' && s2[v] != '\0' && v <= n)
		v++;
	return (s1[v] - s2[v]);
}