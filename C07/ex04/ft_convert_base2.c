/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:20:37 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/31 12:07:40 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char a)
{
	if (a == 32 || (a >= 9 && a <= 13))
	{
		return (1);
	}
	return (0);
}

int	get_sign(char a)
{
	if (a == '-')
		return (-1);
	return (1);
}

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
			if (str[j] == '-' || str[j] == '+' || str[j] == ' ')
				return (0);
			j++;
		}
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
