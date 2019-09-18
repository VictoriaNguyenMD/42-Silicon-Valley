/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:55:01 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/17 19:55:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blerdwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 06:07:17 by blerdwor          #+#    #+#             */
/*   Updated: 2019/07/21 07:20:32 by blerdwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_ugly_puzzle(char **puzzle);
int		solve_sudoku(char **puzzle, int row, int col);
int		is_proper_row_length(int argc, char **argv);

int		main(int argc, char **argv)
{
	if (argc != 10 || is_proper_row_length(argc, argv) == 0)
		write(1, "Error\n", 6);
	else
	{
		if (solve_sudoku(argv, 1, 0) == 1)
		{
			print_ugly_puzzle(argv);
		}
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
