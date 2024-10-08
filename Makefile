NAME = ftlib
CFLAGS = -Wall -Wextra -Werror
BONUS_FLAG = -DFLAG_BONUS
CC = cc
DEPS = libft.h


all: $(NAME)

clean:

fclean:

re:
	fclean
	all


ft_check_char.o: ft_check_char.c
	$(CC) $(FLAGS) -c ft_check_char.c -o ft_check_char.o

ft_convert_char.o: ft_convert_char.c
	$(CC) $(FLAGS) -c ft_convert_char.c -o ft_convert_char.o

ft_mem_crtl.o: ft_mem_crtl.c
	$(CC) $(FLAGS) -c ft_mem_crtl.c -o ft_mem_crtl.o

ft_str_change.o: ft_str_change.c
	$(CC) $(FLAGS) -c ft_str_change.c -o ft_str_change.o

ft_str_crtl.o: ft_str_crtl.c
	$(CC) $(FLAGS) -c ft_str_crtl.c -o ft_str_crtl.o

ft_list.o:
	$(CC) $(FLAGS) -c ft_list.c -o ft_list.o

ft_list_crtl.o:
	$(CC) $(FLAGS) -c ft_list_crtl.c -o ft_list_crtl.o

ft_list_apply.o:
	$(CC) $(FLAGS) -c ft_list_apply.c -o ft_list_apply.o

objects: ft_check_char.o ft_convert_char.o ft_mem_crtl.o ft_str_change.o ft_str_crtl.o

objects_bonus: ft_list.o ft_list_crtl.o ft_list_apply.o

bonus: objects objects_bonus
	ar -crs libft.a ft_list.o ft_list_crtl.o ft_list_apply.o

$(NAME): objects
	ar -crs libft.a ft_check_char.o ft_convert_char.o ft_mem_crtl.o ft_str_change.o ft_str_crtl.o

