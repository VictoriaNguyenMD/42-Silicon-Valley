/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:31:09 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/13 19:26:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <time.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	clock_t t;
	t = clock();

	printf("%d", ft_iterative_factorial(-1));
	putchar('\n');
	
	printf("%d", ft_iterative_factorial(0));
	putchar('\n');

	printf("%d", ft_iterative_factorial(1));
	putchar('\n');

	printf("%d", ft_iterative_factorial(7));
	putchar('\n');

	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; //in seconds
	printf("Program took %f seconds to execute \n", time_taken);

	return (0);
}
