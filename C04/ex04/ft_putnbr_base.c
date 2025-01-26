/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:18:45 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/26 16:43:41 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	check_valid_base(char *str)
{
	int	i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && (i != j))
			{
				return (0);
			}
			if (str[j] == '-' || str[j] == '+')
				return (0);
			j++;
		}
		i++;
	}
	if (i > 0)
		return (i);
	return(0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bn;

	bn = check_valid_base(base);

	if (bn == 0)
		return (0);

	if (nbr == 0)
		write(1, &base[i], 1);

	while (nbr >= 0)
	{

	}


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

int	main (void)
{
	
}