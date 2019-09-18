/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 00:41:42 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/24 08:37:00 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

int					ft_list_size(t_list *begin_list);
void				ft_list_push_front(t_list **begin_list, void *data);
t_list				*ft_create_elem(void *data);
void				ft_list_clear(t_list **begin_list);

#endif
