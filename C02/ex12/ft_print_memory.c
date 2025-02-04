/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:42:51 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/04 13:19:34 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	while (index >= 0)
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
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
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
	int					last_block;
	int					print_lines;
	int					i;

	i = 0;
	print_size = 16;
	print_lines = size / 16;
	if ((size % 16) > 0)
	{
		print_lines += 1;
	}
	last_block = size % 16;
	while (i < print_lines)
	{
		print_number_in_hexa((unsigned long long) &addr + (16 * i), 16);
		write(1, ": ", 2);
		print_content_hexa(addr + (16 * i), print_size);
		print_content_ascii(addr + (16 * i), print_size);
		write(1, "\n", 1);
		if (i++ == (print_lines -2) && last_block != 0)
			print_size = last_block;
	}
	return (addr);
}

int main (void)
{
	char *text = "Exemplo de texto para ler memoria";
	ft_print_memory(text, 31);
}
