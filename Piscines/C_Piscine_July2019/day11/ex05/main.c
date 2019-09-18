/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 00:56:52 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 21:59:33 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int main(void)
{
	t_list *linked_list;
	char *av[] = {"Hello", "My", "Name"};

	linked_list = ft_list_push_params(3, av);
	printf("%p\n", linked_list);
	printf("%s\n", linked_list->data);

	printf("%p\n", linked_list->next);
	printf("%s\n", linked_list->next->data);
	
	printf("%p\n", linked_list->next->next);
	printf("%s\n", linked_list->next->next->data);
}
