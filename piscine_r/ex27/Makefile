# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 16:42:45 by vpluchar          #+#    #+#              #
#    Updated: 2016/11/05 18:27:58 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = main.c functions.c
INCLUDES = ./includes/
OBJ = main.o functions.o
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all : $(NAME)

$(NAME) :
	$(CC) -c $(SRCS) $(CFLAGS) -I $(INCLUDES)
	$(CC) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
