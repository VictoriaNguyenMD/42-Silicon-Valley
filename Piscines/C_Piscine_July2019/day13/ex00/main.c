/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 07:50:35 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/26 07:55:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

int		main(void)
{
	char *str = "Hello";
	t_btree *output = btree_create_node(str);

	printf("%s", output->item);
}
