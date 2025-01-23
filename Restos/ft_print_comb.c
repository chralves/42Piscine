/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:14:17 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/16 10:50:22 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c <= '7')
	{
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, &u++, 1);
		if (u > '9')
		{
			d++;
			u = d +1;
		}
		if (d > '8')
		{
			c++;
			d = c + 1;
			u = d + 1;
		}
		if (c <= '7')
		{
			write(1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
