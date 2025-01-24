/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:08:36 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/24 20:01:22 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str);

int	is_space(char *str)
{
	int	i;

	i=0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	get_sign (char *str, int i)
{
	int	sign;

	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	i = i * sign;
	return (i);
}

int	get_number(char *str, int initial_position)
{
	int	number;
	int	i;

	number = 0;
	i = initial_position;
	while ((str[i] > '0' && str[i] < '9') && str[i] != '\0')
	{
		number *= 10;
		number += str[i] - 48;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int i_signed;

	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		i = is_space(str);
		i = get_sign(str, i);
		printf("Cheguei aqui!!!");
		if (i < 0)
		{
			sign = -1;
			i = -i;
		}
		i++;
		return (get_number(str, i));
	}
	return (0);
}


int main(void)
{
	printf("%d", ft_atoi("     +--+--+-+-+-123dasd"));
}