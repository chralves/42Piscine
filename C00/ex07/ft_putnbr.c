/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:35:12 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/17 13:35:41 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int number);

void	ft_putnbr(int number)
{
	char	casted_number[10];
	int		position;
	char	rest;

	position = 0;
	if (number < 0)
	{
		write(1, "-", 1);
		if (number == -2147483648)
		{
			write(1, "2", 1);
			number = -147483648;
		}
		number = number * -1;
	}
	rest = '0' + (number % 10);
	while (number > 10)
	{
		position++;
		number = number / 10;
		casted_number[position] = '0' + (number % 10);
	}
	while (position > 0)
	{
		write(1, &casted_number[position], 1);
		position--;
	}
	write(1, &rest, 1);
}
