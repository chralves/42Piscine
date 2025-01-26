/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:09:50 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/26 16:09:54 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**************** This document contains the RUSH MAIN FUNCTION ***************/

#include <unistd.h>

void	initialize_matrix(int matrix[4][4]);
void	print_matrix(int matrix[4][4]);
int		populate_matrix(int matrix[4][4], int row, int col, int limits[16]);

int	str_len(char *arg)
{
	int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	validate_args(char *arg, int *limits)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str_len(arg) != 31)
		return (0);
	while (arg[i] != '\0')
	{
		if (arg[i] > '0' && arg[i] <= '4')
		{
			limits[j] = arg[i] - '0';
		}
		else
		{
			return (0);
		}
		i = i + 2;
		j++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	matrix[4][4];
	int	limits[16];

	if (argc == 2)
	{
		validate_args(argv[1], limits);
		initialize_matrix(matrix);
		if (populate_matrix(matrix, 0, 0, limits) == 1)
		{
			print_matrix(matrix);
			return (1);
		}
	}
	write(2, "Error\n", 6);
	return (0);
}
