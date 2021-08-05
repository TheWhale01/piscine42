C_FILES = srcs/*.c
H_FILES = includes/
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJS = srcs/ft_putchar.o srcs/ft_putstr.o srcs/main.o srcs/get_file.o
NAME = ft_display_file

srcs/%.o: srcs/%.c
	$(CC) $(FLAGS) -I $(H_FILES) -c $< -o $@

all: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean: all
	rm -rf srcs/*.o

fclean: clean
	rm -rf $(NAME)

re: all fclean

.PHONY: all clean fclean re