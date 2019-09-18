/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:53:57 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/17 19:53:58 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkubli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 12:15:48 by zkubli            #+#    #+#             */
/*   Updated: 2019/07/13 13:14:58 by zkubli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_type(int i)
{
	if (i == 0)
		ft_putchar(' ');
	else if (i == 1 || i == 2 || i == 4 || i == 8)
		ft_putchar('B');
	else if (i == 5 || i == 9)
		ft_putchar('A');
	else if (i == 6 || i == 10)
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int	row;
	int	col;
	int match_count;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			match_count = 0;
			if (col == 1)
				match_count += 1;
			else if (col == x)
				match_count += 2;
			if (row == 1)
				match_count += 4;
			else if (row == y)
				match_count += 8;
			print_type(match_count);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
