# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 05:24:01 by vinguyen          #+#    #+#              #
#    Updated: 2019/07/25 23:27:50 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = ft_display_file
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_display_file.c srcs/main.c
FLAGS = -Wall -Wextra -Werror
HEADER_FOLDER = includes

all: $(TARGET)

$(TARGET):
	gcc $(FLAGS) $(SRCS) -I $(HEADER_FOLDER) -o $(TARGET)

clean:
	/bin/rm -f $(TARGET)

fclean: clean
	/bin/rm -f *.o

re: fclean all
