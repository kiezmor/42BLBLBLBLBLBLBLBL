# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 16:39:12 by vpluchar          #+#    #+#              #
#    Updated: 2016/11/05 18:38:56 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c
HEADER = ./includes/
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: $(NAME)

$(NAME):
				$(CC) -c $(SRCS) $(CFLAGS) -I $(HEADER)
				ar rc  $(NAME) $(OBJ)
clean:
				rm -f $(OBJ)
fclean: clean
				rm -f $(NAME)
re: fclean all
