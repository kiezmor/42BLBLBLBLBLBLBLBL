CC=gcc

FLAGS=-Wall -Wextra -Werror

SRC=placement0.c\
	placement1.c\
	placement2.c\
	placement3.c\
	test0.c\
	test1.c\
	test2.c\
	test3.c\
	input.c\
	list.c\
	reso.c\
	valid.c\
	display.c\
	ft_memset.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_sqrt.c\
	ft_strlen.c\
	ft_strsplit.c\
	ft_countn.c\
	ft_putstr_fd.c\
	ft_strndup.c\
	ft_strlcpy.c\
	ft_putnbr.c

OBJ_NAME=$(SRC:.c=.o)

NAME=fillit

all:$(NAME)

$(NAME):$(OBJ_NAME)
	$(CC) $(FLAGS) $^ -o $@

$(OBJ_NAME):$(SRC)
	$(CC) $(FLAGS) -c $^

re:fclean all

clean:
	    rm -rf *.o

fclean:clean
	    rm  -rf $(NAME)
