# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 13:26:33 by davidrol          #+#    #+#              #
#    Updated: 2024/04/15 12:41:40 by ribana-b         ###   ########.com       #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap

#Directories
LIBFT		= ./LIBFT/libft.a
SRC			= src/
UTILS		= utils/
OBJ_DIR		= obj/

#Compiler and CFlags
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			=	rm -f
#Sources Files
SOURCE_DIR	=	$(SRC)push_swap.c\
				$(SRC)sort_list.c\
				$(SRC)stack_create.c\
				$(SRC)stack_nodes.c\
				$(SRC)main.c\

UTILS_DIR	=	$(UTILS)change_index_list.c\
				$(UTILS)cost.c\
				$(UTILS)error.c\
				$(UTILS)utils_push.c\
#Concatenate all source files
SRCS			=	$(SOURCE_DIR) $(UTILS_DIR)

#Apply the pattern substitition to each source file in SRC and produce a corresponding list of object file in the OBJ_DIR
OBJ			=	$(patsubst $(SRCS)%.c,$(OBJ_DIR)%.o,$(SRCS))

#Build rules
start:			
				@make all

$(LIBFT):		
				@make -C ./LIBFT

all:			$(NAME)

$(NAME):		$(OBJ) $(LIBFT)
				$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

#Compile object files from source files
$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(BIN) -c $< -o $@
clean:
				@$(RM) -r $(OBJ_DIR)
				@make clean -C ./LIBFT
				@echo "clean ok"

fclean:			clean
				@$(RM) $(NAME)
				@make fclean -C ./LIBFT
				@echo "Library clean"

re: fclean clean all

.PHONY: start, all, clean, fclean, re	
