.PHONY: all clean fclean re objects objects_bonus bonus norm
NAME=ftlib
CFLAGS=-Wall -Wextra -Werror -fno-builtin
BONUS_FLAG=-DFLAG_BONUS
CC=cc
DEPS=libft.h


all: $(NAME)

clean:

fclean:

re:
	fclean
	all


ft_check_char.o: ft_check_char.c
	$(CC) $(CFLAGS) -c ft_check_char.c -o ft_check_char.o

ft_convert_char.o: ft_convert_char.c
	$(CC) $(CFLAGS) -c ft_convert_char.c -o ft_convert_char.o

ft_mem_crtl.o: ft_mem_crtl.c
	$(CC) $(CFLAGS) -c ft_mem_crtl.c -o ft_mem_crtl.o

ft_str_change.o: ft_str_change.c
	$(CC) $(CFLAGS) -c ft_str_change.c -o ft_str_change.o

ft_str_crtl.o: ft_str_crtl.c
	$(CC) $(CFLAGS) -c ft_str_crtl.c -o ft_str_crtl.o

ft_list.o: ft_list.c
	$(CC) $(CFLAGS) -c ft_list.c -o ft_list.o

ft_list_crtl.o: ft_list_crtl.c
	$(CC) $(CFLAGS) -c ft_list_crtl.c -o ft_list_crtl.o

ft_list_apply.o: ft_list_apply.c
	$(CC) $(CFLAGS) -c ft_list_apply.c -o ft_list_apply.o

objects: ft_check_char.o ft_convert_char.o ft_mem_crtl.o ft_str_change.o ft_str_crtl.o

objects_bonus: ft_list.o ft_list_crtl.o ft_list_apply.o

bonus: objects objects_bonus
	ar -crs libft.a ft_list.o ft_list_crtl.o ft_list_apply.o

$(NAME): objects libft.a
	ar -crs libft.a ft_check_char.o ft_convert_char.o ft_mem_crtl.o ft_str_change.o ft_str_crtl.o

norm:
	norminette ft_check_char.c ft_convert_char.c ft_mem_crtl.c ft_str_change.c ft_str_crtl.c libft.h
