# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilyanbendib <ilyanbendib@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 17:49:42 by ilbendib          #+#    #+#              #
#    Updated: 2024/01/24 19:08:05 by ilyanbendib      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 			src/main.c\
				src/ft_init_list_a.c\
				src/ft_utils.c\
				src/moves/push_element.c\
				src/moves/reverse_rotate_element.c\
				src/moves/rotate_element.c\
				src/moves/swap_element.c\

OBJS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc -g3
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -Llibft -lft

LIBFT_DIR = ./LIBFT
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_MAKE = $(MAKE) -C $(LIBFT_DIR)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(LIBFT_MAKE)
	$(CC) $(CFLAGS) -Iinclude -Ilibft $(OBJS) -o $(NAME) $(LDFLAGS)

%.o: %.c include/minitalk.h
	$(CC) $(CFLAGS) -Iinclude -Ilibft -c $< -o $@

$(LIBFT):
	$(LIBFT_MAKE)

clean:
	rm -f $(OBJS)
	$(LIBFT_MAKE) clean

fclean: clean
	rm -f $(NAME)
	$(LIBFT_MAKE) fclean

re: fclean all

.PHONY: clean fclean re all