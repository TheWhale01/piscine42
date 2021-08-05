C_FILES = srcs/add.c srcs/div.c srcs/main.c srcs/mod.c srcs/sub.c srcs/do_op.c srcs/errors.c srcs/ft_atoi.c srcs/ft_putstr.c srcs/is_in.c srcs/mul.c srcs/ft_putnbr.c
H_FILES = includes/
FLAGS = -Wall -Wextra -Werror
CC = gcc
OBJS = ${C_FILES:.c=.o}
NAME = do-op

all: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

debug:
	$(CC) $(FLAGS) $(C_FILES) -g -o $(NAME)

clean: all
	rm -rf srcs/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re