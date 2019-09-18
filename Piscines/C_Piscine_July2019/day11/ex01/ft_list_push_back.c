/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:05:01 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 08:08:04 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_node;
	t_list *temp_node;

	new_node = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = new_node;
	}
	else
	{
		temp_node = *begin_list;
		while (temp_node->next)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
}
