/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:07:07 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/26 12:26:44 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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

int	is_in_matrix(int matrix[4][4], int row, int col, int value)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		if (matrix[x][col] == value)
		{
			return (1);
		}
		x++;
	}
	while (y < 4)
	{
		if (matrix[row][y] == value)
		{
			return (1);
		}
		y++;
	}
	return (0);
}

int	is_valid_row(int matrix[4][4], int n, int r, int row)
{
	int	max_height;
	int	i;
	int cols = 0;
	int cols_r = 0;

	i = 0;
	max_height = 0;
	while (i < 4)
	{
		if (matrix[row][i] > max_height)
		{
			max_height = matrix[row][i];
			cols++;
		}
		i++;
	}
	i = 3;
	max_height = 0;
	while (i >= 0)
	{
		if (matrix[row][i] > max_height)
		{
			max_height = matrix[row][i];
			cols_r++;
		}
		i--;
	}
	// printf("Comparando %d com %d na fila %d", cols, n, row);
	if (cols == n && cols_r == r)
		return (1);
	
	return (0);
}

int	is_valid_col(int matrix[4][4], int n, int r, int col)
{
	int	max_height;
	int	i;
	int cols = 0;
	int cols_r = 0;

	i = 0;
	max_height = 0;
	while (i < 4)
	{
		if (matrix[i][col] > max_height)
		{
			max_height = matrix[i][col];
			cols++;
		}
		i++;
	}
	i = 3;
	max_height = 0;
	while (i >= 0)
	{
		if (matrix[i][col] > max_height)
		{
			max_height = matrix[i][col];
			cols_r++;
		}
		i--;
	}
	// printf("Comparando %d com %d na coluna %d", cols_r, r, col);
	if (cols == n && cols_r == r)
		return (1);
	return (0);
}

int	valid_matrix(int matrix[4][4], int cu[4], int cd[4], int rr[4], int rl[4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!is_valid_row(matrix, rr[i], rl[i], i))
		{
			// printf("Row %d is not valid", i);
			// getchar();
			return (0);
		}
		if (is_valid_col(matrix, cu[i], cd[i], i) == 0)
		{
			// getchar();
			// printf("Col %d is not valid", i);
			return (0);
		}
		i++;
	}
	return (1);
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
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	populate_matrix(int matrix[4][4], int row, int col,	int cu[4], int cd[4], int rr[4], int rl[4])
{
	int	n_row;
	int	n_col;
	int	value;

	if (row == 4 && valid_matrix(matrix, cu, cd, rr, rl))
	{
		print_matrix(matrix);
		return (1);
	}
	if (col == 3)
	{
		n_col = 0;
		n_row = row + 1;
	}
	else
	{
		n_col = col + 1;
		n_row = row;
	}
	value = 1;
	while (value <= 4) // Tiene que volver atras...
	{
		if (is_in_matrix(matrix, row, col, value) == 0)
		{
			matrix[row][col] = value;
			if (populate_matrix(matrix, n_row, n_col, cu, cd, rr, rl))
				return (1);
		}
		matrix[row][col] = 0;
		value++;
	}
	return (0);
}

int	main (void)
{
	int	matrix[4][4];

	// int	cu[4] = {4, 3, 2, 1};
	// int	cd[4] = {1, 2, 2, 2};
	// int	rr[4] = {4, 3, 2, 1};
	// int	rl[4] = {1, 2, 2, 2};

	// int	cu[4] = {3, 2, 2, 1};
	// int	cd[4] = {1, 3, 2, 2};
	// int	rr[4] = {4, 2, 3, 1};
	// int	rl[4] = {1, 2, 2, 2};

	int	cu[4] = {4, 1, 2, 2};
	int	cd[4] = {1, 4, 2, 2};
	int	rr[4] = {2, 3, 2, 1};
	int	rl[4] = {3, 1, 2, 2};

	initialize_matrix(matrix);
	// print_matrix(matrix);
	if (!populate_matrix(matrix, 0, 0, cu, cd, rr, rl))
		write(2, "Error\n", 6);
	// print_matrix(matrix);
}