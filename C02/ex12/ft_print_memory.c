/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:42:51 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/21 16:46:31 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	print_number_in_hexa(unsigned long long decimal, int digits)
{
	char	hex_value[16];
	int		index;
	int		remainder;

	index = 0;
	while (index < digits)
	{
		hex_value[index] = '0';
		index++;
	}
	index = digits - 1;
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
	write(1, &hex_value, digits);
}

void	print_content_hexa(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		print_number_in_hexa(str[i], 2);
		print_number_in_hexa(str[i + 1], 2);
		write(1, " ", 1);
		i = i + 2;
	}
	while (i < 16)
	{
		write(1, "     ", 5);
		i = i + 2;
	}
}

void	print_content_ascii(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] < 32)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int					print_size;
	unsigned int		i;
	unsigned long long	address_of_pointer;

	address_of_pointer = (unsigned long long) &addr[0];
	print_size = 16;
	i = 0;
	while (i <= (size - 1) / 16)
	{
		print_number_in_hexa(address_of_pointer, 16);
		write(1, ": ", 2);
		print_content_hexa(addr, print_size);
		print_content_ascii(addr, print_size);
		write(1, "\n", 1);
		addr += 16;
		address_of_pointer = (unsigned long long) &addr[0];
		if (i == (size / 16) - 1)
		{
			print_size = size % 16;
		}
		i++;
	}
	return (addr);
}
