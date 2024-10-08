NAME=test

all: $(NAME)

re: fclean all

clean:

fclean:

$(NAME):
	cc -Wall -Wextra -Werror -g -o out

run: re
	./out isalpha
	./out isdigit
	./out isalnum
	./out isascii
	./out isprint

	./out toupper
	./out tolower

	./out strlen
	./out strchr
	./out strrchr
	./out strncmp
	./out strnstr
	
	./out strlcpy
	./out strlcat
	
	./out memchr
	./out memcmp
	./out memset
	./out memcpy
	./out memmove

	./out calloc
	./out strup
	./out bzero
	./out atoi
	
	./out ft_
	./out 