/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:14:01 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/13 23:09:44 by vinguyen         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
