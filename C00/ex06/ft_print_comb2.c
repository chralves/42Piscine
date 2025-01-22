/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:49:54 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/17 10:16:46 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	ft_two_digits(int number, int position);

void	ft_two_digits(int number, int position)
{
	char	one;
	char	two;

	one = '0' + number / 10;
	two = '0' + number % 10;
	write(1, &one, 1);
	write(1, &two, 1);
	if (position == 999)
	{
		write(1, " ", 1);
	}
	if (position < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first <= 98 && second <= 99)
	{
		ft_two_digits(first, 999);
		ft_two_digits(second, first);
		second++;
		if (second > 99)
		{
			second = ++first + 1;
		}
	}
}
