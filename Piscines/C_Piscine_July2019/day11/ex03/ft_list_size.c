/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 02:29:14 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 08:16:31 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	count = 0;
	if (begin_list)
	{
		temp = begin_list;
		while (temp)
		{
			temp = temp->next;
			count++;
		}
	}
	return (count);
}
