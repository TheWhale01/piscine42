CC=gcc
CFILES=$(shell find src -type f -name "*.c")
INCLUDE_DIR=includes/
CFLAGS=-Wall -Wextra -Werror -I $(INCLUDE_DIR)
OBJS=${CFILES:.c=.o}
NAME=rpn_calc

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf src/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re