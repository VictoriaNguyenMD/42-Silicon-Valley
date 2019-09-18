/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:53:24 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/17 19:53:28 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkubli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 13:14:16 by zkubli            #+#    #+#             */
/*   Updated: 2019/07/13 16:35:29 by zkubli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_checkvals(int row, int col, int x, int y)
{
	if (row == 1 && col == 1)
		ft_putchar('o');
	else if (row == 1 && col == x)
		ft_putchar('o');
	else if (row == y && col == 1)
		ft_putchar('o');
	else if (row == y && col == x)
		ft_putchar('o');
	else if (row == 1 || row == y)
		ft_putchar('-');
	else if (col == 1 || col == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		row;
	int		col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			ft_checkvals(row, col, x, y);
			col++;
		}
		if (row < y)
			ft_putchar('\n');
		row++;
	}
	ft_putchar('\n');
}
