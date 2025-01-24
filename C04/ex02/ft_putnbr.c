/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:41:35 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/24 12:49:52 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	num_array[11];
	int		i;

	i = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	while (nb > 9)
	{
		num_array[i++] = '0' + (nb % 10);
		nb = nb / 10;
	}
	num_array[i] = nb + '0';
	while (i >= 0)
	{
		write(1, &num_array[i--], 1);
	}
}
