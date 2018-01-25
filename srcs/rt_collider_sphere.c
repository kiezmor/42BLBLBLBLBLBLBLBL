/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_collider_sphere.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 21:25:06 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/25 06:25:44 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rtv1.h>

/*
** l'equation de la sphere étant x^2 + y^2 + z^2 = R^2
** on calcul a, b et c tel que ak^2 + bk + c = 0
** on y integre l'equation de la droite (origine + vecteur)
** x = Xpos + kVx
** y = Ypos + kVy
** z = Zpos + kVz
** Avec :
**      - Xpos, Ypos et Zpos la position de la caméra, on a pris ici la
**      position inverse de l'objet afin de placer ce dernier en (0,0,0)
**      - Vx, Vy et Vz le vecteur concerné de la caméra
**      - k, la distance caméra <=> intersection que l'on cherche
** Ce qui nous donne (sans la position inverse) :
** a = Vx^2 + Vy^2 + Vz^2
** b = 2 * (Xpos * Vx + Ypos * Vy + Zpos * Vz)
** c = Xpos^2 + Ypos^2 + Zpos^2 - R^2
*/

t_impact rt_collider_sphere(t_float3 vector, t_object sphere)
{
    t_float3 abc;
    t_impact i;

    abc.x = powf(vector.x, 2) + powf(vector.y, 2) + powf(vector.z, 2);
    abc.y = 2.0 * (-sphere.pos.x * vector.x - sphere.pos.y * vector.y - sphere.pos.z * vector.z);
    abc.z = powf(sphere.pos.x, 2) + powf(sphere.pos.y, 2) + powf(sphere.pos.z, 2) - powf(sphere.ray, 2);
    rt_collider_delta(abc, &i);
    i.color = sphere.color;
    return (i);
}
