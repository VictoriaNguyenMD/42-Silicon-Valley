# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 09:25:56 by vinguyen          #+#    #+#              #
#    Updated: 2019/09/17 19:57:01 by vinguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = eval_expression
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c
HEADER_FOLDER = includes
FLAGS = -Wall -Wextra -Werror
all: $(TARGET)

$(TARGET):
	gcc $(FLAGS) $(SRCS) -I $(HEADER_FOLDER) -o $(TARGET)

clean:
	rm -f $(TARGET)

fclean: clean
	rm -f */o

re: fclean all
