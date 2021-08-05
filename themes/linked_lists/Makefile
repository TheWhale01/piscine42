CC=gcc
HEADERS_DIRS=includes/
SRCS=$(shell find srcs/ -type f -name "*.c")
CFLAGS=-Wall -Wextra -Werror -I $(HEADERS_DIRS)
NAME=t_lists
OBJS=${SRCS:.c=.o}

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f srcs/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all