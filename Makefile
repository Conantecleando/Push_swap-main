# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 13:26:33 by davidrol          #+#    #+#              #
#    Updated: 2024/04/22 21:32:32 by daroldan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap

#Directories
LIBFT		= ./LIBFT/libft.a
SRC_DIR			= src/
UTILS_DIR		= utils/
OBJ_DIR		= obj/

#Compiler and CFlags
CC			= gcc -g
CFLAGS		= -Wall -Werror -Wextra -I ./src
RM			=	rm -f
#Sources Files
SRC			=	$(SRC_DIR)push_swap.c\
				$(SRC_DIR)rotate.c\
				$(SRC_DIR)clean_stack.c\
				$(SRC_DIR)sort_list.c\
				$(SRC_DIR)stack_create.c\
				$(SRC_DIR)stack_nodes.c\
				$(SRC_DIR)main.c\

UTILS		=	$(UTILS_DIR)change_index_list.c\
				$(UTILS_DIR)cost.c\
				$(UTILS_DIR)error.c\
				$(UTILS_DIR)utils_push.c\
				$(UTILS_DIR)aux.c\
				$(UTILS_DIR)moves_stacks.c\

#Apply the pattern substitition to each source file in SRC and produce a corresponding list of object file in the OBJ_DIR
OBJ			=	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(SRC)) \
				$(patsubst $(UTILS_DIR)%.c, $(OBJ_DIR)%.o, $(UTILS))

all:			$(NAME)

$(NAME):		$(OBJ_DIR) $(OBJ)
				make -C ./LIBFT
				$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

# Create directory for the objects
$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

#Compile object files from source files
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: $(UTILS_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@make clean -C ./LIBFT
				@echo "clean ok"

fclean:			clean
				@$(RM) $(NAME)
				@make fclean -C ./LIBFT
				@echo "Library clean"

re: fclean clean all

.PHONY: all, clean, fclean, re	
