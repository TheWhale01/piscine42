CC=gcc
CFILES=$(shell find src -name "*.c")
HEADERS_DIR=includes/
DEBUG_FLAGS=-Wall -Wextra -Werror
CFLAGS=-Wall -Wextra -Werror -I $(HEADERS_DIR)
NAME=brainfuck
OBJS=${CFILES:.c=.o}

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

debug:
	$(CC) $(DEBUG_FLAGS) test.c -g -o test

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all