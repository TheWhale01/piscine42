CC=gcc
CFILES=$(shell find srcs -type f -name "*.c")
HEADERS_DIR=includes/
CFLAGS=-Wall -Wextra -Werror -I $(HEADERS_DIR)
NAME=ft_hexdump
OBJS=${CFILES:.c=.o}

DBG_OUTPUT=debug
OBJS_DBG=$(patsubst srcs/%.c, $(DBG_OUTPUT)/objs/%.o, $(CFILES))
CFLAGS_DBG=$(CFLAGS) -g
NAME_DBG = debug/$(NAME)_dbg

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(shell find srcs/ -type f -name "*.o")

fclean: clean
	rm -f $(NAME)
	rm -rf debug/*

re: fclean all

debug: $(OBJS_DBG)
	$(CC) $(CFLAGS_DBG) $(OBJS_DBG) -o $(NAME_DBG)

$(DBG_OUTPUT)/objs/%.o: srcs/%.c
	$(shell mkdir -p $(shell dirname $@))
	$(CC) $(CFLAGS_DBG) -c $< -o $@

.PHONY: all clean fclean debug push re