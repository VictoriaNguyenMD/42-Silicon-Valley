/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:55:10 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/17 19:55:11 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blerdwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 06:15:52 by blerdwor          #+#    #+#             */
/*   Updated: 2019/07/21 07:38:53 by blerdwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_in_current_row(char *current_row, char find_num);
int		is_in_current_col(char **puzzle, int current_col, char find_num);
int		is_in_current_box(char **puzzle, int current_row,
		int current_col, char find_num);

int		can_place_value(char **puzzle, int current_row,
		int current_col, char find_num)
{
	if ((is_in_current_row(puzzle[current_row], find_num) == 0) &&
			(is_in_current_col(puzzle, current_col, find_num)) == 0 &&
			(is_in_current_box(puzzle, current_row,
			current_col, find_num) == 0))
		return (1);
	return (0);
}

int		solve_sudoku(char **puzzle, int row, int col)
{
	int val;
	int find_num;

	if (col == 9)
	{
		col = 0;
		row++;
		if (row == 10)
			return (1);
	}
	if (puzzle[row][col] != '.')
		return (solve_sudoku(puzzle, row, col + 1));
	val = 0;
	while (++val <= 9)
	{
		find_num = val + '0';
		if (can_place_value(puzzle, row, col, find_num))
		{
			puzzle[row][col] = find_num;
			if (solve_sudoku(puzzle, row, col + 1))
				return (1);
		}
	}
	puzzle[row][col] = '.';
	return (0);
}

void	print_ugly_puzzle(char **puzzle)
{
	int i;
	int j;

	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			if (j != 0)
				write(1, " ", 1);
			write(1, &puzzle[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
