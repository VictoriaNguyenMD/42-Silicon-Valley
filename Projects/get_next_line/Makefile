# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 21:00:49 by vinguyen          #+#    #+#              #
#    Updated: 2019/10/16 21:00:50 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

#Folders containing *.c and *.h files
SRC = .
INCLUDES = .

#Files
NAMES = get_next_line
SRC_FILES = $(addsuffix .c, $(NAMES))
OBJ_FILES = $(addsuffix .o, $(NAMES))

#Compiler
CC = gcc

#FLAGS
CFLAGS = -g -Wall -Wextra -Werror
SANIT = -fsanitize=address

#Command that compiles the *.c files
$(NAME):
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $(addprefix $(SRC)/, $(SRC_FILES))

clean:
	@/bin/rm -rf $(OBJ_FILES)

fclean: clean
	@if test -e $(NAME); then\
		/bin/rm $(NAME);\
	fi;

re: fclean all

test:
	@make -C libft/ fclean && make -C libft/ 
	@gcc -D getnextline get_next_line.c -I./libft -L./libft/ -lft $(SANIT)
	@./a.out

norm:
	@norminette *.c *.h

.PHONY: all clean fclean re test norm

