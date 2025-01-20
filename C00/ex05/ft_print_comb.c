/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:14:17 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/16 15:55:16 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c;
		while (++d <= '8')
		{
			u = d;
			while (++u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c < '7')
				{
					write(1, ", ", 2);
				}
			}
		}
		c++;
	}
}
