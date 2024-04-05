# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 13:26:33 by davidrol          #+#    #+#              #
#    Updated: 2024/04/05 13:35:55 by davidrol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

FILES = push_swap.c
		sort_list.c
		stack_create.c
		stack_nodes.c
		change_index_list.c
		cost.c
		error.c
		utils_push.c
		main.c

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

.PHONY: all, clean, fclean, re

clean
	@rm -f $(OBJ)
	@echo "clean ok"

fclean:
	@rm -f $(NAME) $(OBJ)
	@echo "Library clean"

re: fclean clean all

		