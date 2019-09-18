/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 07:28:51 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/26 16:40:02 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	if ((node = malloc(sizeof(t_btree))))
	{
		node->right = NULL;
		node->left = NULL;
		node->item = item;
	}
	return (node);
}
