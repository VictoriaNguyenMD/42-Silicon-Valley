/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 06:39:24 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 06:51:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *output;
	int i;

	output = (int*)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		output[i] = (*f)(tab[i]);
		i++;
	}
	return (output);
}
