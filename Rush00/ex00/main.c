/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipatric <dipatric@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:55:08 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/18 14:56:55 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	char_to_number(char value[])
{
	int	p;
	int	number;

	p = 0;
	number = 0;
	while (value[p] != '\0')
	{
		if (value[p] >= 48 && value[p] <= 57)
		{
			number *= 10;
			number += value[p] - 48;
		}
		else
		{
			number = 0;
			break ;
		}
		p++;
	}
	return (number);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc >= 3)
	{
		x = (char_to_number(argv[1]));
		y = (char_to_number(argv[2]));
		if (x != 0 && y != 0)
		{
			rush(x, y);
			return (0);
		}
		else
		{
			write(1, "Use positive numbers as arguments, please\n", 42);
			return (0);
		}
	}
	else
	{
		write(1, "Usage: 'rush <width> <heigh>'\n", 30);
		return (0);
	}
}
