/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:34:53 by vinguyen          #+#    #+#             */
/*   Updated: 2019/07/11 23:24:46 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
	ft_putchar('\n');
}
