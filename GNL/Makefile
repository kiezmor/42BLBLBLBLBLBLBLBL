# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/20 16:58:14 by vpluchar          #+#    #+#              #
#    Updated: 2016/12/21 00:03:50 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=GNL
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LIBFTH= ./libft/includes get_next_line.h
OBJ=$(FILES:.c=.o)
LIBFT_DIR=./libft

_RED=\x1b[31m
_GREEN=\x1b[32m
_NO_COLOR=\x1b[0m

FILES=./libft/libft.a get_next_line.c

$(NAME):
	@make -C $(LIBFT_DIR)
	@$(CC) $(CFLAGS) -I$(LIBFTH) $(FILES)
	@echo "${_GREEN}Creation du GNL!${_NO_COLOR}"

all: $(NAME)

clean: 
	@echo "${_RED}Supression des .o${_NO_COLOR}"
	@rm -f $(OBJ)

fclean: clean
	@echo "${_RED}Supression du GNL${_NO_COLOR}"
	@rm -f $(NAME)

cll:
	@make clean -C $(LIBFT_DIR)

fcll:
	@make fclean -C $(LIBFT_DIR)

rel:
	@make re -C $(LIBFT_DIR)

re: fclean all
