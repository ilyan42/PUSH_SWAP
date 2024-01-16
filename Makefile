# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:49:42 by ilbendib          #+#    #+#              #
#    Updated: 2024/01/16 14:47:37 by ilyanbendib      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

_SRCS = 		src/main.c
NAME = so_long
_HEADERS = so_long.h
CC = gcc
CFLAGS = -g3 -Wall -Wextra -Werror

SRC_DIR = .

SRCS = $(_SRCS:%=$(SRC_DIR)/%)


HEADERS_DIR = .

HEADERS = $(_HEADERS:%=$(HEADERS_DIR)/%)

AR = ar

ARFLAGS = rcs

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ./LIBFT
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_MAKE = $(MAKE) -C $(LIBFT_DIR)

all: $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -I$(HEADERS_DIR) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE) all -C ./LIBFT
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re