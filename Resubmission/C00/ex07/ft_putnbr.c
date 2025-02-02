/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 13:35:12 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:14:57 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num_array[11];
	int		i;

	i = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
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
