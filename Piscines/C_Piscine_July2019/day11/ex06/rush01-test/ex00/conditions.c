/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blerdwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 06:13:51 by blerdwor          #+#    #+#             */
/*   Updated: 2019/07/21 14:45:15 by blerdwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_in_current_row(char *current_row, char find_num)
{
	int c;

	c = 0;
	while (c < 9)
	{
		if (current_row[c] == find_num)
		{
			return (1);
		}
		c++;
	}
	return (0);
}

int		is_in_current_col(char **puzzle, int current_col, char find_num)
{
	int r;

	r = 1;
	while (r <= 9)
	{
		if (puzzle[r][current_col] == find_num)
		{
			return (1);
		}
		r++;
	}
	return (0);
}

int		is_in_current_box(char **puzzle, int current_row,
		int current_col, char find_num)
{
	int start_row;
	int start_col;
	int max_row;
	int max_col;

	start_row = ((current_row - 1) - ((current_row - 1) % 3) + 1);
	start_col = ((current_col) - (current_col % 3));
	max_row = start_row + 2;
	max_col = start_col + 2;
	while (start_row <= max_row)
	{
		start_col = max_col - 2;
		while (start_col <= max_col)
		{
			if (puzzle[start_row][start_col] == find_num)
				return (1);
			start_col++;
		}
		start_row++;
	}
	return (0);
}

int		is_valid_char(char check_num)
{
	if ((check_num >= '0' && check_num <= '9') || (check_num == '.'))
		return (1);
	else
		return (0);
}

int		is_proper_row_length(int argc, char **argv)
{
	int row;
	int col;
	int row_length;

	row = 1;
	col = 0;
	row_length = 9;
	while (row < argc)
	{
		col = 0;
		while (argv[row][col] != '\0')
		{
			if (is_valid_char(argv[row][col]) == 0)
			{
				return (0);
			}
			col++;
		}
		if (col != row_length)
			return (0);
		row++;
	}
	return (1);
}
