/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blblblblb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 22:31:22 by vpluchar          #+#    #+#             */
/*   Updated: 2017/02/09 22:32:21 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
  char	*line = "salutlesgens";

  ft_putnbr(*line);
  ft_putchar('\n');
  *((int*)line)) = 123;
  return (0);
}