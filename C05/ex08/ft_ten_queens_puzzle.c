/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:50:44 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/29 09:49:46 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_valid_position(int pos, int index, int *array)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (array[i] == pos || array[i] == pos - (index - i)
			|| array[i] == pos + (index - i))
			return (0);
		i++;
	}
	return (1);
}

void	print_int_array(int array[10])
{
	int		i;
	char	to_print;

	i = 0;
	while (i < 10)
	{
		to_print = array[i] + '0';
		write(1, (&to_print), 1);
		i++;
	}
	write(1, "\n", 1);
}

void	init_int_array(int *array)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		array[i] = -1;
		i++;
	}
}

int	position_the_queens(int start, int *sol, int *array)
{
	int	value;

	if (start == 10)
	{
		(*sol)++;
		print_int_array(array);
		return (0);
	}
	value = 0;
	while (value < 10)
	{
		if (is_valid_position(value, start, array))
		{
			array[start] = value;
			position_the_queens(start + 1, sol, array);
			array[start] = -1;
		}
		value++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	sol;
	int	array[10];

	sol = 0;
	init_int_array(array);
	position_the_queens(0, &sol, array);
	return (sol);
}
