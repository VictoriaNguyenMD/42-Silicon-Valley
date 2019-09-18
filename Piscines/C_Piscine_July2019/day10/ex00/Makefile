# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 05:58:53 by vinguyen          #+#    #+#              #
#    Updated: 2019/07/23 06:16:55 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECT_FILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER_FOLDER = includes

all: $(TARGET)

$(TARGET):
	gcc -Wall -Wextra -Werror -I $(HEADER_FOLDER) -c $(SRC)
	ar rc $(TARGET) $(OBJECT_FILES)
	ranlib $(TARGET)

clean:
	/bin/rm -f $(OBJECT_FILES)

fclean: clean
	/bin/rm -f $(TARGET)

re: fclean all
