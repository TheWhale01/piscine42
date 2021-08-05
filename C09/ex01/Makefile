C_FILES = srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_putchar.c srcs/ft_swap.c
H_FILES = includes/
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJS = srcs/ft_strlen.o srcs/ft_strcmp.o srcs/ft_putstr.o srcs/ft_putchar.o srcs/ft_swap.o
NAME = libft.a

srcs/%.o: srcs/%.c
	$(CC) $(FLAGS) -I $(H_FILES) -c $< -o $@

all: $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: $(all)
	rm -rf srcs/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all