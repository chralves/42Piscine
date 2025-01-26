/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:57:03 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/26 16:03:45 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*** This document contains all the functions to CHECK VALUES in the matrix ***/

int	is_in_matrix(int matrix[4][4], int row, int col, int value)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		if (matrix[x][col] == value)
			return (1);
		x++;
	}
	while (y < 4)
	{
		if (matrix[row][y] == value)
			return (1);
		y++;
	}
	return (0);
}

int	is_valid_row(int matrix[4][4], int n, int r, int row)
{
	int	max_height;
	int	i;

	i = -1;
	max_height = 0;
	while (++i < 4)
	{
		if (matrix[row][i] > max_height)
		{
			max_height = matrix[row][i];
			n--;
		}
	}
	max_height = 0;
	while (--i >= 0)
	{
		if (matrix[row][i] > max_height)
		{
			max_height = matrix[row][i];
			r--;
		}
	}
	if (n == 0 && r == 0)
		return (1);
	return (0);
}

int	is_valid_col(int matrix[4][4], int n, int r, int col)
{
	int	max_height;
	int	i;

	i = -1;
	max_height = 0;
	while (++i < 4)
	{
		if (matrix[i][col] > max_height)
		{
			max_height = matrix[i][col];
			n--;
		}
	}
	max_height = 0;
	while (--i >= 0)
	{
		if (matrix[i][col] > max_height)
		{
			max_height = matrix[i][col];
			r--;
		}
	}
	if (n == 0 && r == 0)
		return (1);
	return (0);
}

int	is_valid_matrix(int matrix[4][4], int limits[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (is_valid_row(matrix, limits[i + 8], limits[i + 12], i) == 0)
		{
			return (0);
		}
		if (is_valid_col(matrix, limits[i], limits[i + 4], i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
