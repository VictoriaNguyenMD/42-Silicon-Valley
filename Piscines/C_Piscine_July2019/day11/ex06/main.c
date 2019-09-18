/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 00:56:52 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 05:53:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	t_list *linked_list;

	linked_list = NULL;
	ft_list_push_front(&linked_list, "test");
	ft_list_push_front(&linked_list, "for");
	ft_list_push_front(&linked_list, "you");
	printf("%s\n", linked_list->data);
	printf("%s\n", linked_list->next->data);
	printf("%s\n", linked_list->next->next->data);

	ft_list_clear(&linked_list);

	printf("--After Clearing--\n");
	if(linked_list)
	{
		printf("%s\n", linked_list->data);
		printf("%s\n", linked_list->next->data);
		printf("%s\n", linked_list->next->next->data);
	}
}
