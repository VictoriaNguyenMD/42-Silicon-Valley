/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 09:35:06 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/27 10:39:14 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct stack
{
	char **items;
	int	size;
} stack;

int	eval_expr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **s);

#endif
