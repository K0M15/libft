NAME=test

all: $(NAME)

re: fclean all

clean:

fclean:

$(NAME):
	cc *.c ../libft.a -Wall -Wextra -Werror -g -o out

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
	
	./out ft_substr
	./out ft_strjoin
	./out ft_strtrim
	./out ft_split
	./out ft_itoa
	./out ft_strmapi
	./out ft_striteri
	./out ft_putchar_fd
	./out ft_putstr_fd
	./out ft_putendl_fd
	./out ft_putnbr_fd

	./out ft_lstnew
	./out ft_lstsize
	./out ft_lstlast
	./out ft_lstadd_front
	./out ft_lstadd_back
	
	./out ft_lstdelone
	./out ft_lstclear
	
	./out ft_lstiter
	./out ft_lstmap