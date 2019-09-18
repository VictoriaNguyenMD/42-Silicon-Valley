/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 20:55:26 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/13 23:14:23 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int count;
	int temp;

	count = 0;
	temp = nb;
	if (nb == 1 || nb == 0)
	{
		return (0);
	}
	else
	{
		while (temp > 0)
		{
			if (nb % temp == 0)
			{
				count++;
			}
			if (count > 2)
			{
				return (0);
			}
			temp--;
		}
	}
	return (1);
}
