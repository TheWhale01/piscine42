CC=gcc
CFILES=$(shell find src -type f -name "*.c")
HEADERS_DIR=includes/
CFLAGS=-Wall -Wextra -Werror -I $(HEADERS_DIR)
DEBUG_FLAGS=-Wall -Wextra -Werror
NAME=skyscraper.out
OBJS=${CFILES:.c=.o}

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -lSDL2 -lSDL2_ttf

clean:
	rm -f $(OBJS)

debug:
	$(CC) $(DEBUG_FLAGS) -g debug/test.c

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean debug fclean re