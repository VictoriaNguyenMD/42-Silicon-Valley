/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 05:08:29 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 08:27:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!(*begin_list))
	{
		*begin_list = new_node;
	}
	else
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*linked_list;
	int		index;

	linked_list = 0;
	index = 0;
	while (index < ac)
	{
		ft_list_push_front(&linked_list, av[index]);
		index++;
	}
	return (linked_list);
}
