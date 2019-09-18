/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:55:40 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 02:28:09 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_node;
	
	new_node = ft_create_elem(data);
	if(!(*begin_list))
	{
		*begin_list = new_node;
	}
	else
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
}
