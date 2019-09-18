
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-oliv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:21:20 by jde-oliv          #+#    #+#             */
/*   Updated: 2018/03/30 11:21:22 by jde-oliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	if ((node = malloc(sizeof(t_btree))))
	{
		node->item = item;
		node->right = NULL;
		node->left = NULL;
	}
	return (node);
}