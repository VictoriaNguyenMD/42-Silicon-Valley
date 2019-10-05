# **************************************************************************** #sr
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/30 16:39:05 by vinguyen          #+#    #+#              #
#    Updated: 2019/09/30 17:10:55 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Library name
NAME = libft.a

#Folders containing *.c and *.h files
SRC = srcs/
INCLUDES = includes/

#Source Files
NAMES = ft_toupper ft_tolower ft_strncmp ft_isprint ft_isdigit ft_isascii ft_isalpha ft_isalnum \
	ft_atoi
SRC_FILES = $(addsuffix .c, $(NAMES))
OBJ_FILES = $(addsuffix .o, $(NAMES))

#Compiler
CC = gcc

#Flags
CFLAGS = -g -Wall -Wextra -Werror

#Baseline command that compiles all the files
.PHONY: all
all: $(NAME)

#Command that compiles the *.c files, creates the library, and index the files
$(NAME):
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $(addprefix $(SRC), $(SRC_FILES))
	ar -rv $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

.PHONY: clean
clean:
	/bin/rm -rf $(OBJ_FILES)

.PHONY: fclean
fclean: clean
	/bin/rm $(NAME)

#Command that cleans all the files and remakes the library
.PHONY: re
re: fclean all






