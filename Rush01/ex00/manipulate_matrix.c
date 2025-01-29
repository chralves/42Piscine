/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:53:16 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/29 15:04:50 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/****** This document contains all the functions to MANIPULATE the matrix *****/

#include <unistd.h>

int	is_valid_matrix(int matrix[4][4], int limits [16]);
int	is_in_matrix(int matrix[4][4], int row, int col, int value);

void	initialize_matrix(int matrix[4][4])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (col < 4)
	{
		row = 0;
		while (row < 4)
		{
			matrix[row][col] = 0;
			row++;
		}
		col++;
	}
}

void	print_matrix(int matrix[4][4])
{
	int		row;
	int		col;
	char	to_print;

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			to_print = matrix[row][col] + '0';
			write(1, &to_print, 1);
			if (col < 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	populate_matrix(int matrix[4][4], int row, int col,	int limits[16])
{
	int	n_row;
	int	n_col;
	int	value;

	if (row == 4 && is_valid_matrix(matrix, limits))
		return (1);
	n_col = col + 1;
	n_row = row;
	if (col == 3)
	{
		n_col = 0;
		n_row = row + 1;
	}
	value = 1;
	while (value++ <= 4)
	{
		if (is_in_matrix(matrix, row, col, value - 1) == 0)
		{
			matrix[row][col] = value - 1;
			if (populate_matrix(matrix, n_row, n_col, limits))
				return (1);
		}
		matrix[row][col] = 0;
	}
	return (0);
}
