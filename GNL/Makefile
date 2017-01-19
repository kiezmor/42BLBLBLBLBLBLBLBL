# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/20 16:58:14 by vpluchar          #+#    #+#              #
#    Updated: 2017/01/19 00:15:53 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS=-Wall -Wextra -Werror

LIBFT_DIR=libft/

INC=libft/includes/

LIB=libft/libft.a

SRC=get_next_line.c main.c

OBJ_NAME=$(SRC:.c=.o)

_RED=\x1b[31m
_GREEN=\x1b[32m
_NO_COLOR=\x1b[0m

NAME=GNL

all:$(NAME)

$(NAME):$(OBJ_NAME)
	@echo "${_GREEN}Creation du GNL!${_NO_COLOR}"
	@$(CC) $(FLAGS) $^ $(LIB) -I $(INC) -o $@

$(OBJ_NAME):$(SRC)
	@$(CC) $(FLAGS) -c $^
	@make -C $(LIBFT_DIR)

re:fclean all

clean:
	@echo "${_RED}Supression des .o GNL${_NO_COLOR}"
	@make clean -C $(LIBFT_DIR)
	@rm -rf *.o

fclean:clean
	@echo "${_RED}Supression du GNL${_NO_COLOR}"
	@make fclean -C $(LIBFT_DIR)
	@rm  -rf $(NAME)
