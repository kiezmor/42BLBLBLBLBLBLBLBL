# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/20 16:58:14 by vpluchar          #+#    #+#              #
#    Updated: 2017/02/11 12:40:21 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Name

NAME=GNL

## Compilation

CC=gcc
FLAGS=-Wall -Wextra -Werror

## Directories

LIBFT_DIR=libft/
INC=./libft/includes
LIB=libft/libft.a

OBJ_NAME=$(SRC:.c=.o)

SRC=get_next_line.c main.c

## Colors

_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_NO_COLOR=\x1b[0m

## Rules

all:$(NAME)

$(NAME):$(OBJ_NAME)
	@echo "${_GREEN}Compilation de ${_YELLOW}GNL${_NO_COLOR}"
	@$(CC) $(FLAGS) $^ $(LIB) -I $(INC) -o $@

$(OBJ_NAME):$(SRC)
	@make -C $(LIBFT_DIR)
	@echo "${_GREEN}Compilation des .o du ${_YELLOW}GNL${_NO_COLOR}"
	@$(CC) $(FLAGS) -c $^

re:fclean all

clean:
	@echo "${_RED}Suppression des .o ${_YELLOW}GNL${_NO_COLOR}"
	@make clean -C $(LIBFT_DIR)
	@rm -rf *.o

fclean:
	@echo "${_RED}Suppression des .o ${_YELLOW}GNL${_NO_COLOR}"
	@rm -rf *.o
	@echo "${_RED}Suppression du ${_YELLOW}GNL${_NO_COLOR}"
	@rm  -rf $(NAME)
	@make fclean -C $(LIBFT_DIR)
