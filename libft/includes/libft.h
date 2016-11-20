/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:10:07 by vpluchar          #+#    #+#             */
/*   Updated: 2016/11/17 00:32:03 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, int nb);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dst, char *src, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(char *str, char *to_find);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
