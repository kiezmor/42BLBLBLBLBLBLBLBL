CC=clang

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

OBJ_NAME=$(FILES:.c=.o)

NAME=fillit

all:$(NAME)

$(NAME):$(OBJ_NAME)
	$(CC) $(FLAGS) $(SRC) ./libft42/src/*.c -I libft42/includes/ -o $@


re:fclean all

clean:
	    rm -rf *.o

fclean:clean
	    rm  -rf $(NAME)
