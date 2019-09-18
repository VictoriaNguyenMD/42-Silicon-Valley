/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:39:04 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/12 23:09:00 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char n);

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
