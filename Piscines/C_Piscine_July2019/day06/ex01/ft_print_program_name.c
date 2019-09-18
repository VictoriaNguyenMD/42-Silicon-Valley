/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 22:18:16 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/18 12:44:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	index;

	index = 0;
	if (argc)
	{
		index = 0;
		while (argv[0][index] != '\0')
		{
			ft_putchar(argv[0][index]);	
			index++;
		}
	}
	return (0);
}
