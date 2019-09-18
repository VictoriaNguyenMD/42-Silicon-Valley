/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blerdwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 21:59:03 by blerdwor          #+#    #+#             */
/*   Updated: 2019/07/21 06:05:00 by blerdwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*Checks to see if the number we are searching for is in the current row.
 * If it IS in the curent row, then we return 1.
 * If it IS NOT in the current row, then we return 0. */
int		isInCurrentRow(char *current_row,  char find_num)
{
	int c;

	c = 0;
	while (c < 9)
	{
		//printf("\nletter: %c, num: %c\n", current_row[c], find_num);
		if (current_row[c] == find_num)
		{
			return (1);
		}
		c++;
	}
	return (0);	
}

/*Checks to see if the number we are searching for is in the current column.
 * If it IS in the curent column, then we return 1.
 * If it IS NOT in the current column, then we return 0. */
int		isInCurrentCol(char **puzzle, int current_col, char find_num)
{
	int r;

	r = 1; //r = 1 because puzzle[0] is the filename
	while (r <= 9)
	{
		//printf("\nletter: %c, num: %c\n", puzzle[r][current_col], find_num);
		if (puzzle[r][current_col] == find_num)
		{
			return (1);
		}
		r++;
	}
	return (0);	
}

/*Checks to see if the number we are searching for is in the current grid.
 * If it IS in the curent grid, then we return 1.
 * If it IS NOT in the current grid, then we return 0. */
int		isInCurrentBox(char **puzzle, int current_row, int current_col, char find_num)
{	
	int start_row;
	int start_col;
	
	//Locate the top leftmost corner of the box
	start_row = ((current_row - 1) - ((current_row - 1) % 3) + 1);
	start_col = ((current_col) - (current_col % 3));
	
	//Stores the maximum row and maximum column for traversing through the box
	int max_row;
	int max_col;
	
	max_row = start_row + 2;
	max_col = start_col + 2;
	
	//Checking for number in the box 
	while (start_row <= max_row)
	{
		start_col = max_col - 2; //Resets the column to the start column after every new row
		while (start_col <= max_col)
		{
			//printf("\nrow: %d, col: %d, num: %c, find_num: %c\n", current_row, current_col, puzzle[current_row][current_col], find_num);
			if (puzzle[start_row][start_col] == find_num)
				return (1);
			start_col++;
		}
		start_row++;
	}
	return (0);
}

int	canPlaceValue(char **puzzle, int current_row, int current_col, char find_num)
{
		
	if((isInCurrentRow(puzzle[current_row], find_num) == 0) && (isInCurrentCol(puzzle, current_col, find_num)) == 0
			&& (isInCurrentBox(puzzle, current_row, current_col, find_num) == 0))
		return (1);
	return (0);
}

int		solveSudoku(char **puzzle, int row, int col)
{
	if (col == 9)
	{
		col = 0;
		row++;
		if (row == 10)
		{
			return (1);
		}
	}
	if (puzzle[row][col] != '.')
	{
		return (solveSudoku(puzzle, row, col + 1));
	}
	int val;
	int find_num;

	val = 1;
	while (val <= 9)
	{
		find_num = val + '0';
		if(canPlaceValue(puzzle, row, col, find_num))
		{
			puzzle[row][col] = find_num;
			if(solveSudoku(puzzle, row, col + 1))
			{
				return (1);
			}
		}
		val++;
	}
	puzzle[row][col] = '.';
	return (0);		
}

/*Prints out the sudoku board with 9 given arguments during file execution*/
void	printPuzzle(char **puzzle)
{
	int i, j;
	
	i = 1;
	//Looks at each row
	while (i <= 9)
	{
		j = 0;
		//Looks at each col
		while (j < 9)
		{
			//Separates each sudoku number
			write(1, "  ", 2);
		   	write(1, &puzzle[i][j], 1);
			write(1, "  ", 2);
			//Separates every 3rd column with a bar |
			if(((j + 1) % 3 == 0) && j != 8)
			{
				write(1, "   |   ", 7);
			}
			j++;
		}
		//Creates a new line after every row
		write(1, "\n", 1);
		//Separates every 3rd column with a dash -------
		if((i % 3 == 0) && i != 9)
		{
			write(1, "-----------------------------------------------------------", 59);
			write(1, "\n", 1);
		}
		i++;
	}
}

void	printUglyPuzzle(char **puzzle)
{
	int i, j;
	
	i = 1;
	while (i <= 9)
	{
		j = 0;
		while (j < 9)
		{
			if(j != 0)
				write(1, " ", 1);
			write(1, &puzzle[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}


int		main(int argc, char **argv)
{
	//buildPuzzle(*argv);
	//printPuzzle(argv);
	//printf("%s", argv[1]);
	//printf("\n-----%d", isInCurrentCol(argv, 0, '1'));
	if(argc != 10)
		write(1, "Error\n", 6);
	else
	{
		if(solveSudoku(argv, 1, 0) == 1)
		{
			printPuzzle(argv);
			write(1, "\n", 1);
			printUglyPuzzle(argv);
		}
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
