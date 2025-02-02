/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:18:45 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 15:29:00 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_valid_base(char *str)
{
	int	i;
	int	j;

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
	if (i > 1)
		return (i);
	return (0);
}

int	abs(int num)
{
	if (num == -2147483648)
		return (2147483647);
	else if (num < 0)
		return (-num);
	return (num);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bn;
	int	remainder;

	bn = check_valid_base(base);
	if (bn == 0)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	if (abs(nbr) >= bn)
	{
		remainder = abs(nbr % bn);
		nbr = abs(nbr / bn);
		ft_putnbr_base(nbr, base);
		write(1, &base[remainder], 1);
		return ;
	}
	write(1, &base[nbr], 1);
}
