/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 07:50:35 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/26 09:26:40 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree *create_tree(void)
{
	t_btree *root;
    root = btree_create_node("1");
   	root->left = btree_create_node("2");
    root->right = btree_create_node("5");
    root->left->left = btree_create_node("3");
    root->left->right = btree_create_node("4");
    root->right->right = btree_create_node("6");
    return (root);
}

void	print_original_tree(t_btree *root)
{
	printf("		%s	", root->item);
	printf("\n	%s		  %s", root->left->item, root->right->item);
	printf("\n%s  	  %s                %s", root->left->left->item, root->left->right->item, root->right->right->item);
}	

void	print_item(void *item)
{	
	printf("%s ", (char*)item);
}

int		main(void)
{
	t_btree *tree;

	tree = create_tree();
	//print_original_tree(tree);
	btree_apply_prefix(tree, print_item);
	return (0);
}
