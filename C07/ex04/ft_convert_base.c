/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:20:28 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/03 15:15:17 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_space(char a);
int	get_sign(char a);
int	check_valid_base(char *str);
int	symbol_in_base(char digit, char *base);

int	check_size_in_base_x(int nbr, int base)
{
	int	size;

	size = 1;
	if (nbr < 0)
	{
		size ++;
		nbr *= -1;
	}
	while (nbr / base > 0)
	{
		nbr = nbr / base;
		size++;
	}
	return (size);
}

int	get_number_in_base_x(char *nbr, char *base_from, int sign, int i)
{
	int	number;
	int	to_add;
	int	bn;

	bn = check_valid_base(base_from);
	number = 0;
	to_add = symbol_in_base(nbr[i], base_from);
	while (nbr[i++] != '\0' && to_add != -1)
	{
		number = (number * bn) + to_add;
		to_add = symbol_in_base(nbr[i], base_from);
	}
	return (sign * number);
}

char	*put_number_in_base_x(int nbr, char *base_to, int i, char *return_nbr)
{
	int	base;

	base = check_valid_base(base_to);
	if (nbr < 0)
	{
		return_nbr[0] = '-';
		nbr *= -1;
	}
	if (nbr >= base)
		put_number_in_base_x(nbr / base, base_to, i - 1, return_nbr);
	return_nbr[i] = base_to[nbr % base];
	return_nbr[i + 1] = '\0';
	return (return_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		sign;
	int		i;
	int		number;
	int		ptr_size;
	char	*result;

	result = NULL;
	i = 0;
	sign = 1;
	if (check_valid_base(base_from) == 0 || check_valid_base(base_to) == 0)
		return (result);
	i = 0;
	while (is_space(nbr[i]))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
		sign = sign * get_sign(nbr[i++]);
	number = get_number_in_base_x(nbr, base_from, sign, i);
	ptr_size = check_size_in_base_x(number, check_valid_base(base_to));
	result = (char *)malloc(ptr_size * sizeof(char) + 1);
	if (result == NULL)
		return (result);
	put_number_in_base_x(number, base_to, ptr_size - 1, result);
	return (result);
}
