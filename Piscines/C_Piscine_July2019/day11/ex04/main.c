/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 04:41:29 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 05:05:00 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

int main(void)
{
	t_list *linked_list;

	linked_list = NULL;
	ft_list_push_front(&linked_list, "test");
	ft_list_push_front(&linked_list, "for");
	ft_list_push_front(&linked_list, "you");
	printf("#1 %s\n", linked_list->data);
	printf("#2 %s\n", linked_list->next->data);
	printf("#3 %s\n", linked_list->next->next->data);
	printf("Last elem: %s\n", ft_list_last(linked_list)->data);	
}

