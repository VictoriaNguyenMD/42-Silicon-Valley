/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 05:48:26 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/24 05:54:14 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int aff_a(char *argv)
{
	int i = 0;
	while(argv[i] != 'a' && argv[i] != '\0')
	{
		i++;
	}
	if (argv[i] == 'a')
	{
		write(1, "a", 1);
	}
	write(1, "\n", 1);
	return (0);
}

int main(int argc, char **argv)
{
	if (argc == 2) //Only 1 argument
	{
		aff_a(argv[1]);
	}
	else // 0 or 2+ arguments
	{
		write(1, "a", 1);
		write(1, "\n", 1);
	}
	return (0);
}
