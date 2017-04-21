# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/19 05:06:16 by vpluchar          #+#    #+#              #
#    Updated: 2017/04/21 07:38:17 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CC	= gcc
FLAGS	= -Wall -Werror -Wextra

##REMOVE KEBAB >>

LIB = ./libft/libft.a
LIB_DIR = ./libft/
LIB_INC = ./libft/includes/

## << REMOVE KEBAB

SRC	= ft_printf.c ft_flag.c ft_utils.c ft_works.c ft_checks.c
OBJ	= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
##	@echo "lib created"

$(OBJ):
	@$(CC) $(FLAGS) -c $(SRC) -I $(LIB_INC)
##	@echo "obj created"

##REMOVE KEBAB >>

test:
	@make re
	@make clean
	@$(CC) $(FLAGS) main.c libftprintf.a $(LIB)
	@./a.out
	@rm ./a.out

lib:
	@make -C $(LIB_DIR)
	@make clean -C $(LIB_DIR)

## << REMOVE KEBAB

clean:
	@rm -f $(OBJ)
##	@echo "obj deleted"

fclean: clean
	@rm -f $(NAME)
##	@echo "lib deleted"

re: fclean all
