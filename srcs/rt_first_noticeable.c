/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_visible_noticeable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 00:36:05 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/25 03:00:34 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtv1.h>

static t_visible this_nearest_noticeable(t_impact cldr)
{
    t_visible view;

    view = (t_visible){.visible = FALSE, .k = -1, .color = cldr.color};
    if (cldr.hit == TRUE)
    {
        if (cldr.k1 >= 0)
            view.k = cldr.k1;
        if (cldr.k2 >= 0)
        {
            if (view.k < 0 || (view.k >= 0 && cldr.k2 < view.k))
                view.k = cldr.k2;
        }
        if (view.k > 0)
            view.visible = TRUE;
    }
    return (view);
}

t_visible rt_first_noticeable(t_impact cldr1, t_impact cldr2)
{
    t_visible v1;
    t_visible v2;

    v1 = this_nearest_noticeable(cldr1);
    v2 = this_nearest_noticeable(cldr2);
    if (v1.visible == TRUE && v2.visible == TRUE)
    {
        if (v1.k < v2.k)
            return (v1);
        else
            return (v2);
    }
    else if (v1.visible == TRUE)
        return (v1);
    else if (v2.visible == TRUE)
        return (v2);
    else
        return ((t_visible){FALSE, -1, 0x00000000});
}
