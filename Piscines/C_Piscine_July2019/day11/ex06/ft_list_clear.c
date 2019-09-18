/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 05:30:27 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 08:38:07 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (!*begin_list)
		return ;
	while (*begin_list)
	{
		temp = (*begin_list)->next;
		free(*begin_list);
		*begin_list = temp;
	}
	*begin_list = 0;
}
