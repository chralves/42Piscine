/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:50:44 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/28 18:27:04 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_valid_position(int pos, int index, int *array)
{
	int	i;

	i = 0;

	if (index > 0)
	{
		if (array[index - 1] == pos || array[index - 1] == (pos - 1))
			return (0);

		while (i < 10)
		{
			if (array[i] == pos)
				return(0);
			i++;
		}
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
		array[i] = -9;
		i++;
	}
}

int	position_the_queens (int start, int value, int *sol, int *array)
{
	int	n_start;

	if (start == 10)
	{
		*sol++;
		n_start = 0;
		value = 0;
		print_int_array(array);
		init_int_array(array);
		return (1);
	}
	n_start = start +1;
	while (value < 10)
	{
		if (is_valid_position(value, start, array))
		{
			array[start] = value;
			if (position_the_queens(n_start, value, sol, array) == 1)
				return(1);
		}
		//array[start] = -9;
		value++;
	}
	value = 0;
	return(0);
}

int	ft_ten_queens_puzzle(void)
{
	int	n_sol;
	int	*ptr_sol;
	int	start;
	int	array[10];
	int value;

	ptr_sol = &n_sol;
	n_sol = 0;
	start = 0;
	value = 0;

	while(value < 10)
	{
		init_int_array(array);
		position_the_queens(start, value, ptr_sol, array);
		value++;
	}
	return (n_sol);
}
int main(void)
{
	ft_ten_queens_puzzle();
}