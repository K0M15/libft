NAME=test

all: $(NAME)

re: fclean all

clean:

fclean: clean
	rm -f

$(NAME):
	cc *.c ../libft.a -Wall -Wextra -Werror -fno-builtin -g -o out

run: re
	./out