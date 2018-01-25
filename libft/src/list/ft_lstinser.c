/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:10:54 by gsimeon           #+#    #+#             */
/*   Updated: 2016/08/20 16:41:58 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstinser(t_list **lst, t_list *src, size_t n)
{
	if (n && *lst)
		return (ft_lstinser(&((*lst)->next), src, n - 1) + 1);
	src->next = *lst;
	*lst = src;
	return (0);
}
