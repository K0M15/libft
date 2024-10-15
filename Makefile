.PHONY: all clean fclean re objects objects_bonus bonus norm

NAME=ftlib
FILES= ft_atoi.o \
ft_bzero.o \
ft_calloc.o \
ft_isalpha.o \
ft_isdigit.o \
ft_isalnum.o \
ft_isascii.o \
ft_isprint.o \
ft_toupper.o \
ft_tolower.o \
ft_itoa.o \
ft_memcmp.o \
ft_memset.o \
ft_memcpy.o \
ft_memmove.o \
ft_memchr.o \
ft_putchar_fd.o \
ft_putstr_fd.o \
ft_putendl_fd.o \
ft_putnbr_fd.o \
ft_split.o \
ft_strlcat.o \
ft_strlcpy.o \
ft_strlen.o \
ft_strchr.o \
ft_strrchr.o \
ft_strncmp.o \
ft_strnstr.o \
ft_striteri.o \
ft_strmapi.o \
ft_strtrim.o \
ft_strdup.o \
ft_substr.o \
ft_strjoin.o \
ft_striteri.o \
ft_strmapi.o \
ft_strtrim.o

SOURCE=$(FILES:.o=.c)

CFLAGS=-Wall -Wextra -Werror -g
BONUS_FLAG=-DFLAG_BONUS
CC=cc
DEPS=libft.h


all: $(FILES) pack

clean:
	rm -f $(FILES)
	

fclean: clean
	rm -f libft.a

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

pack:
	ar -crs libft.a $(FILES)

norm:
	norminette $(SOURCE)
