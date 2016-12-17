/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 03:59:16 by chle-van          #+#    #+#             */
/*   Updated: 2016/12/16 04:24:00 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft.h"
# include <stdio.h>
# define BUFF_S 20

typedef struct		s_piece
{
	int				type;
	int				place;
	int				l;
	int				h;
	char			letter;
	struct s_piece	*next;
}					t_piece;

t_piece				*ft_tetvalid(char *c);
t_piece				*ft_input(int fd);
t_piece				*ft_detect(char **tab);
t_piece				*ft_d00(char **p, char c);
t_piece				*ft_d01(char **p, char c);
t_piece				*ft_d02(char **p, char c);
t_piece				*ft_d03(char **p, char c);
t_piece				*ft_d04(char **p, char c);
t_piece				*ft_d05(char **p, char c);
t_piece				*ft_d06(char **p, char c);
t_piece				*ft_d07(char **p, char c);
t_piece				*ft_d08(char **p, char c);
t_piece				*ft_d09(char **p, char c);
t_piece				*ft_d10(char **p, char c);
t_piece				*ft_d11(char **p, char c);
t_piece				*ft_d12(char **p, char c);
t_piece				*ft_d13(char **p, char c);
t_piece				*ft_d14(char **p, char c);
t_piece				*ft_d15(char **p, char c);
t_piece				*ft_d16(char **p, char c);
t_piece				*ft_d17(char **p, char c);
t_piece				*ft_d18(char **p, char c);
int					ft_allpl(t_piece *list);
int					ft_opt_size(t_piece *list);
int					ft_tplace(char **map, t_piece *piece, int size, int i, int j);
char				**ft_newmap(int size);
char				ft_dot(t_piece *piece);
char				ft_diez(t_piece *piece);
void				ft_fillit(int fd);
int					ft_p00(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p01(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p02(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p03(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p04(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p05(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p06(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p07(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p08(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p09(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p10(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p11(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p12(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p13(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p14(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p15(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p16(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p17(char **tab, int i, int j, t_piece *piece, int c);
int					ft_p18(char **tab, int i, int j, t_piece *piece, int c);
void				ft_ladd(t_piece *list, t_piece *add);
void				ft_displaytab(char **tab, int size);
void				ft_listletter(t_piece *piece);
int					ft_res(t_piece *list, char **map, int size, int i, int j);
#endif
