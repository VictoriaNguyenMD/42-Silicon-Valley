/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:30:12 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/16 09:46:52 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	ft_helper(int nb)
{
	int val;

	if (nb == 0)
	{
		return ;
	}
	else
	{
		val = nb % 10;
		ft_helper(nb / 10);
		ft_putchar(val + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_helper(147483648);
		return ;
	}
	else if (nb == 2147483647)
	{
		ft_putchar('2');
		ft_helper(147483647);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ft_helper(nb);
}
