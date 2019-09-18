/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:41:00 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 21:58:32 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		f(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a > b)
		return (1);
	else
		return (0);
}
	
int		main(void)
{
	int tab[] = {2, 4, 4, 8, 9};

	printf("%d", ft_is_sort(tab, 5, &f));
}
