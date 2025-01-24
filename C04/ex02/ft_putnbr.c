/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:47:14 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/24 09:13:20 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int	remain;
	char	num_array[11];
	int	i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483647)
		{
			write(1, "2", 1);
			nb = -147483647;
		}
		nb = -nb;
	}

	while (nb / 10 > 0) // 42
	{
		num_array[i] = '0' + (nb % 10);
		nb = nb / 10;
		i++;
	}
	num_array[i] = nb;
	while (i >= 0)
	{
		write(1, &num_array[i], 1);
		i--;
	}
}

int main (void)
{
	ft_putnbr(42);
	ft_putnbr(1212323);
	ft_putnbr(-2147483647);
}