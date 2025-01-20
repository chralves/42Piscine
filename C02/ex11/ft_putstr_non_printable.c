/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:22:18 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 14:23:13 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	write_hex_value(int decimal)
{
	char	hex_value[2];
	int		index;
	int		remainder;

	index = 1;
	hex_value[0] = '0';
	hex_value[1] = '0';
	while (decimal >= 0 && index >= 0)
	{
		remainder = (decimal % 16) + 48;
		if (remainder > '9')
		{
			remainder = remainder + 39;
		}
		hex_value[index] = remainder;
		decimal = decimal / 16;
		index--;
	}
	write(1, "\\", 1);
	write(1, &hex_value, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int	p;
	int	cap_n;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 32)
		{
			write_hex_value(str[p]);
		}
		else
		{
			write(1, &str[p], 1);
		}
		p++;
	}
}
