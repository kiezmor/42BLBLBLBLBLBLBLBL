# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/08 01:40:21 by vpluchar          #+#    #+#              #
#    Updated: 2017/03/08 01:46:14 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## Name

NAME=libftprintf.a

## Compilation

CC=gcc
CFLAGS=-Wall -Wextra -Werror

## Directories

LIBFT_DIR=./libft/
INC_DIR= ./includes/
SRC_DIR=srcs/

LIB_INC=./libft/includes
LIBFT=./libft/libft.a

OBJ=$(FILES:.c=.o)

SRC=$(addprefix $(SRC_DIR), $(FILES))

## Colors

_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_NO_COLOR=\x1b[0m

## Functions

FILES= ft_printf.c

## Rules

$(NAME): $(OBJ)
	@echo "${_GREEN}Compilation de ${_YELLOW}Printf${_NO_COLOR}"
	@ar rc $(NAME) $(OBJ) $(LIBFT) -I $(LIB_INC)

$(OBJ)%.o: $(SRC)
	@echo "${_GREEN}Compilation des .o de ${_YELLOW}Printf${_NO_COLOR}"
	@$(CC) $(CFLAGS) -c $(SRC) $ -I $(INC_DIR)

all: $(NAME)

clean: 
	@echo "${_RED}Suppression des .o de ${_YELLOW}Printf${_NO_COLOR}"
	@rm -f $(OBJ)
	@make clean -C $(LIBFT_DIR)

fclean : clean
	@echo "${_RED}Suppression de ${_YELLOW}Printf${_NO_COLOR}"
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_DIR)

re: fclean all
