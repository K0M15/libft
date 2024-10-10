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
ft_strtrim.o

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

# objects: ft_check_char.o ft_convert_char.o ft_mem_crtl.o ft_str_change.o ft_str_crtl.o

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

pack:
	ar -crs libft.a $(FILES)

norm:
	norminette ft_check_char.c ft_convert_char.c ft_mem_crtl.c ft_str_change.c ft_str_crtl.c libft.h
