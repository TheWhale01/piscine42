CC=gcc
HEADER_DIR=includes/
CFLAGS=-Wall -Wextra -Werror -I $(HEADER_DIR)
CFILES=$(shell find src -type f -name "*.c")
OBJS=${CFILES:.c=.o}
NAME=bin/a.out

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -lSDL2

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re