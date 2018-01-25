/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_collider_plane.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 03:37:34 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/25 06:52:37 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtv1.h>

/*
** l'equation du plan étant z = 0,
** si Vz n'est pas nul :
**  - on trouve directement sa collision avec k = - Zpos / Vz
** sinon il n'y a pas de collision 
*/

t_impact rt_collider_plane(t_float3 vector, t_object plane)
{
    t_impact i;

    if (-0.000001 > vector.z || vector.z > 0.000001)
    {
        i.hit = TRUE;
        i.k1 = plane.pos.z / vector.z;
        i.k2 = i.k1;
    }
    else
        i.hit = FALSE;
    i.color = plane.color;
    return (i);
}
