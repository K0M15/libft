.PHONY: all clean fclean re objects objects_bonus bonus norm

NAME=ftlib
FILES= ft_atoi.o \
ft_bzero.o \
ft_calloc.o \
ft_check_char.o \
ft_convert_char.o \
ft_itoa.o \
ft_mem_crtl.o \
ft_put_fd.o \
ft_split.o \
ft_str_change.o \
ft_str_crtl.o \
ft_str_new.o \
ft_striteri.o \
ft_strmapi.o \
ft_strtrim.o \
ft_str_crtl.o \
ft_str_new.o \
ft_striteri.o \
ft_strmapi.o \
ft_strtrim.o

SOURCE=$(FILES:.o=.c)

CFLAGS=-Wall -Wextra -Werror
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
