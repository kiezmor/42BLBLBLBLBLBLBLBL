/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_cam_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 20:39:44 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/24 02:49:32 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtv1.h>

/*
 ** on considère une caméra en {0, 0, 0} orienté vers les z positifs
 ** et un ecran de projection placé en : 
 ** x = 1
 ** ex : en s'étalant de -1 à 1 en y et z, cela nous fait un FOV de 90 degrés
 **
 **                 z             x (nord)
 **                  |          /
 **                  |        /
 **                  |      /
 **                  |    /
 **                  |  /
 **  -y (ouest) _____|/________ y (est)
 **                 /|
 **               /  |
 **             /    |
 **           /      |
 **        -x (sud)   -z (altitude)
*/

t_float3 rt_cam_vector(int xwin, int ywin, int x_pix, int y_pix)
{
    float pitch;

// faire du propre a la place de tan(FOV en radian / 2)
    pitch = tanf(1.5708 / 2.0) * 2.0 / xwin;
    return ((t_float3){1.0,
                       pitch * 0.5 + pitch * (x_pix - xwin / 2.0),
                       pitch * -0.5 - pitch * (y_pix - ywin / 2.0)});
}
