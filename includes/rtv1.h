/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rtv1.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsimeon <gsimeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 22:45:36 by gsimeon           #+#    #+#             */
/*   Updated: 2018/01/25 06:55:41 by gsimeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RTV1_H
#define RTV1_H

// cheated include
#include <stdio.h>

// not cheated include
#include <SDL2/SDL.h>
#include <libft.h>
#include <math.h>

// define
#define X_WIN 60
#define Y_WIN 40

#define TRUE 1
#define FALSE 0

// struct sdl2
typedef struct s_sdl
{
    SDL_Event *event;
    SDL_Window *win;
    SDL_Renderer *rndr;
} t_sdl;

// struct floats

typedef struct s_float3
{
    float x;
    float y;
    float z;
} t_float3;

typedef struct s_float4
{
    float w;
    float x;
    float y;
    float z;
} t_float4;

// struct objets

typedef struct s_object
{
    t_float3 pos;
    float ray;
    uint32_t color;
} t_object;

// struct collisions

typedef struct s_impact
{
    int hit;
    float k1;
    float k2;
    uint32_t color;
} t_impact;

typedef struct s_visible
{
    int visible;
    float k;
    uint32_t color;
} t_visible;

// fonctions proto sdl2
int init_sdl(t_sdl *sdl);

// fonctions de test

t_float3 rt_cam_vector(int xwin, int ywin, int x_pix, int y_pix);

void rt_collider_delta(t_float3 abc, t_impact *cldr);

t_impact rt_collider_sphere(t_float3 vector, t_object sphere);
t_impact rt_collider_plane(t_float3 vector, t_object plane);

t_visible rt_first_noticeable(t_impact cldr1, t_impact cldr2);

t_impact rt_collider_cylinder(t_float3 vector, t_object cylinder);

#endif
