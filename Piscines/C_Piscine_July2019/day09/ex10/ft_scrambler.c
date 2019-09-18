/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 05:17:57 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/19 05:29:50 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp_a;
	int temp_c;
	int temp_d;
	int temp_b;

	temp_a = ***a;
   	temp_c = *******c;
	temp_d = ****d;
	temp_b = *b;
	*******c = temp_a;
	****d = temp_c;
	*b = temp_d;
	a*** = temp_b;
}
