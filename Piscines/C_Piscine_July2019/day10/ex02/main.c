/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 06:31:22 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 06:50:02 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int 	add(int a)
{
	return (a + 10);
}

int		main(void)
{
	int tab[] = {1,2,3,4,5};
	int *output = ft_map(tab, 5, &add);
	for(int i = 0; i < 5; i++)
	{
		printf("%d\n", output[i]);
	}
	return (0);
}
