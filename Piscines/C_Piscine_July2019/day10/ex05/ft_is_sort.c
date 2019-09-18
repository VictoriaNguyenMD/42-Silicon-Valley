/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 21:32:52 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/23 23:26:32 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int index;

	index = 0;
	while (index < length - 1)
	{
		if (f(tab[index], tab[index + 1]) > 0)
		{
			return (0);
		}
		index++;
	}
	return (1);
}
