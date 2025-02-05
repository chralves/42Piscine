/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:18:45 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/05 10:10:09 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	check_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '-' || str[i] == '+' || is_space(str))
			return (0);
		i++;
	}
	if (i > 1)
		return (i);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bn;
	int		remainder;
	long	num;

	num = (long)nbr;
	bn = check_valid_base(base);
	if (bn == 0)
		return ;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num >= bn)
	{
		remainder = num % bn;
		num = num / bn;
		ft_putnbr_base(num, base);
		write(1, &base[remainder], 1);
		return ;
	}
	write(1, &base[num], 1);
}
