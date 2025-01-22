/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:45:48 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/22 09:48:18 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_array(char *str, int digits)
{
	int	i;

	i = digits;
	while ((10 - i) <= 9)
	{
		write(1, &str[10 - i], 1);
		i--;
	}
	if (str[10 - digits] < ('9' - digits + 1))
	{
		write(1, ", ", 2);
	}
}

int	get_position(char *str, int size)
{
	int	i;

	i = 10 - size;
	if (str[10 - size] >= (10 - size + '0'))
	{
		str[10 - size] = 'E';
		return (0);
	}
	else
	{
		while (i <= 9)
		{
			if (str[i] >= (i + '0'))
			{
				return (i - 1);
			}
			i++;
		}
	}
	return (0);
}

void	initialize_array(char *str, int position, char value)
{
	int	i;

	i = 0;
	while (position <= 9)
	{
		str[position] = value + i;
		i++;
		position++;
	}
}

void	ft_print_combn(int n)
{
	char	array[10];
	int		i;

	if (n > 0 && n <= 10)
	{
		initialize_array(array, 0, '0');
		initialize_array(array, (10 - n), '0');
		while (array[10 - n] <= (10 - n + '0'))
		{
			print_array(array, n);
			array[9]++;
			if (array[9] > '9')
			{
				i = get_position(array, n);
				initialize_array(array, i, array[i] + 1);
			}
		}
	}
}
