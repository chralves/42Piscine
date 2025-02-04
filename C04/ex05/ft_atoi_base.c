/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:59:31 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/04 16:08:07 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	symbol_in_base(char digit, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == digit)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	number;
	int	bn;
	int	to_add;

	bn = check_valid_base(base);
	if (bn == 0)
		return (0);
	number = 0;
	sign = 1;
	i = is_space(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	to_add = symbol_in_base(str[i], base);
	while (str[i++] != '\0' && to_add != -1)
	{
		number = (number * bn) + to_add;
		to_add = symbol_in_base(str[i], base);
	}
	return (number * sign);
}
