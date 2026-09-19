NAME = animate-bash

INCLUDE = include

LIBFT_DIR = lib/libft
LIBFT = $(LIBFT_DIR)/libft.a

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
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(LIBFT) -o $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.Phony: all clean fclean