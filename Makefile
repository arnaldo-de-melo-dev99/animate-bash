NAME = animate-bash

INCLUDE = lib

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE)

SRCS = $(wildcard src/*.c)
UTILS = $(wildcard utils/*.c)

HEADERS = $(wildcard include/*.h)

RM = rm -rf

OBJS = $(SRCS:.c=.o) $(UTILS:.c=.o)

$(OBJS): $(HEADERS)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

.Phony: all clean fclean