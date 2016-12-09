# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 05:28:33 by vpluchar          #+#    #+#              #
#    Updated: 2016/12/09 01:00:03 by vpluchar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
INCLUDES= ./includes/
OBJ=$(FILES:.c=.o)
SRC_DIR=srcs/
O_DIR=o/
SRC=$(addprefix $(SRC_DIR), $(FILES))

_RED=$'\x1b[31m
_GREEN=$'\x1b[32m

FILES=ft_atoi.c ft_isdigit.c ft_memalloc.c ft_memdel.c ft_putendl.c\
	ft_putstr_fd.c  ft_strcpy.c ft_striteri.c ft_strmapi.c ft_strnew.c\
	ft_strsub.c ft_bzero.c ft_isprint.c ft_memccpy.c ft_memmove.c\
	ft_putendl_fd.c ft_strcat.c ft_strdel.c ft_strjoin.c ft_strncat.c\
	ft_strnstr.c ft_strtrim.c ft_isalnum.c ft_isspace.c ft_memchr.c\
	ft_memset.c ft_putnbr.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strncmp.c\
	ft_strrchr.c ft_tolower.c ft_isalpha.c ft_itoa.c ft_memcmp.c ft_putchar.c\
	ft_putnbr_fd.c ft_strclr.c ft_strequ.c ft_strlen.c ft_strncpy.c\
	ft_strsplit.c ft_toupper.c ft_isascii.c ft_lstnew.c ft_memcpy.c\
	ft_putchar_fd.c ft_putstr.c ft_strcmp.c ft_striter.c ft_strmap.c\
	ft_strnequ.c ft_strstr.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c\
	ft_lstiter.c ft_lstmap.c ft_strndup.c ft_countwords.c ft_strlcpy.c\
	ft_strrev.c ft_sqrt.c ft_range.c ft_fibonacci.c

$(NAME): $(OBJ)
	@echo "${_GREEN}Creation de la lib!"
	@ar rc $(NAME) $(OBJ)

$(OBJ)%.o: $(SRC)
	@echo "${_GREEN}Compilation!"
	@$(CC) $(CFLAGS) -c $(SRC) $ -I $(INCLUDES)

all: $(NAME)

clean: 
	@echo "${_RED}Supression des .o"
	@rm -f $(OBJ)

fclean : clean
	@echo "${_RED}Supression de Libft.a"
	@rm -f $(NAME)

re: fclean all
