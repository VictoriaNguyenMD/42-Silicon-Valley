/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 02:33:38 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/30 02:33:40 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	c_cpy(char **dest, char **srcs)
{
	char *temp;

	temp = *dest;
	*dest = *srcs;
	*srcs = temp;
}

char	*ft_realloc(char *ptr, int new_size)
{
	char *temp;
	
	temp = (char*)malloc(new_size);
	while(*ptr)
	{
		c_cpy(&temp, &ptr);
		ptr++;
	}
	return temp;
}

char  *read_std_in(void)
{
	char	c;
	char	*str;
	char	*str_head_ptr;
	int		len;

	str = (char*)malloc(sizeof(char*));
	str_head_ptr = str;
	len = 0;
	while(read(STDIN_FILENO, &c, 1))
	{
		if(len >= sizeof(str))
		{
			
			str = ft_realloc(str_head_ptr, sizeof(str) + sizeof(char*));
		}
		else
		{
			*str = c;
			str++;
			len++;
		}
	}
	return str;
}

int		main(int argc, char **argv)
{
	int i;
	char *arr;

	if (argc == 1)
	{
		arr = read_std_in();
	}
/*
	else
	{
		i = 1;
		while (i <= argc)
		{
			create_bsq(argc[i])
			i++;
		}
	}
*/
}
