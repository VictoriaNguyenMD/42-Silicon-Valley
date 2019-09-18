/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 04:38:09 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 08:19:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *temp;

	temp = begin_list;
	if (!begin_list)
		return (0);
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	return (temp);
}
