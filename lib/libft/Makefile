# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ade-melo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/05 10:27:54 by ade-melo          #+#    #+#              #
#    Updated: 2025/07/05 10:28:02 by ade-melo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = libft.h
AR = ar
ARFLAGS = rcs
RM = rm -f

SRC =	ft_bzero.c ft_isprint.c ft_memset.c \
	ft_strncmp.c ft_isalnum.c ft_memchr.c \
	ft_strchr.c ft_isalpha.c ft_memcmp.c \
	ft_strlcat.c ft_strrchr.c ft_isascii.c \
	ft_memcpy.c ft_strlcpy.c ft_tolower.c \
	ft_isdigit.c ft_memmove.c ft_strlen.c \
	ft_toupper.c ft_strnstr.c ft_atoi.c \
	ft_strdup.c ft_calloc.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	@$(AR) $(ARFLAGS) $@ $^

clean:
	@$(RM) $(OBJ)
	
fclean: clean
	@$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
