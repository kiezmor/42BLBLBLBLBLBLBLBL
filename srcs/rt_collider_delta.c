/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_collider_delta.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 02:08:38 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/25 05:49:21 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtv1.h>

/*
** delta = b^2 - 4ac
** si delta est positif, il y a deux distances
** si delta est egale a 0 on a une distance
** sinon on a pas de collision
** pour les distances on a :
** (-b -sqrt(delta)) / 2a
** (-b +sqrt(delta)) / 2a
*/

void rt_collider_delta(t_float3 abc, t_impact *i)
{
    float delta;

    delta = powf(abc.y, 2) - 4 * abc.x * abc.z;
    if (delta >= 0)
    {
        i->hit = TRUE;
        i->k1 = -abc.y + sqrtf(delta) / 2 * abc.x;
        i->k2 = -abc.y - sqrtf(delta) / 2 * abc.x;
    }
    else
        i->hit = FALSE;
}
