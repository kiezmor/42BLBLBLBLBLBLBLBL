/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 22:45:33 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/25 06:59:18 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int main(void)
{
    t_impact i[2];
    t_visible v;

    printf("\033[48;2;0;0;0m+");
    for (int x = 0; x < X_WIN; x++)
        printf("--");
    printf("+\n");
    for (int y = 0; y < Y_WIN; y++)
    {
        printf("|");
        for (int x = 0; x < X_WIN; x++)
        {
            i[0] = rt_collider_cylinder(rt_cam_vector(X_WIN, Y_WIN, x, y),
                                      (t_object){.pos.x = 40, .pos.y = 0, .pos.z = 0, .ray = 1, .color = 0x00ccc000});
            i[1] = rt_collider_plane(rt_cam_vector(X_WIN, Y_WIN, x, y),
                                     (t_object){.pos.x = 0, .pos.y = 0, .pos.z = -2, .ray = 0, .color = 0x000000cc});
            v = rt_first_noticeable(i[0], i[1]);
            printf("\033[48;2;%d;%d;%dm  ", (v.color >> 16) & 0xff, (v.color >> 8) & 0xff, v.color & 0xff);
            // printf("%d", rt_collider_sphere(rt_cam_vector(80, Y_WIN, x, y), (t_object){(t_float3){10, 0, 0}, 3}));
        }
        printf("\033[48;2;0;0;0m|\n");
    }
    printf("+");
    for (int x = 0; x < X_WIN; x++)
        printf("--");
    printf("+\n");
    return (0);
}