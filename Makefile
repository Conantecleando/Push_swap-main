# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 13:26:33 by davidrol          #+#    #+#              #
#    Updated: 2024/04/08 22:41:52 by daroldan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= push_swap.a

#Directories
LIBFT		= ./libft.a
SRC			= src/
UTILS		= utils/
OBJ_DIR		= obj/

#Compiler and CFlags
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			=	rm -f
#Sources Files
SOURCE_DIR	=	$(SRC)src/push_swap.c\
				$(SRC)src/sort_list.c\
				$(SRC)src/stack_create.c\
				$(SRC)src/stack_nodes.c\
				$(SRC)src/main.c\

UTILS_DIR	=	$(SRC)utils/change_index_list.c\
				$(SRC)utils/cost.c\
				$(SRC)utils/error.c\
				$(SRC)utils/utils_push.c\
#Concatenate all source files
SRCS			=	$(SOURCE_DIR) $(UTILS_DIR)

#Apply the pattern substitition to each source file in SRC and produce a corresponding list of object file in the OBJ_DIR
OBJ			=	$(patsubst $(SRC)%.c,$(OBJ_DIR)%.o,$(SRCS))

#Build rules
start:			
				@make all

$(LIBFT):		
				@make -C

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(SRC) $(UTILS) $(LIBFT) -o $(NAME)

#Compile object files from source files
$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(BIN) -c $< -o $@
clean:
				@$(RM) -r $(OBJ_DIR)
				@echo "clean ok"

fclean:
				@$(RM) $(NAME) $(OBJ)
				@echo "Library clean"

re: fclean clean all

.PHONY: start, all, clean, fclean, re	