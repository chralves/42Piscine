/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:05:33 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 11:06:44 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	p;

	is_numeric = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 48 || str[p] > 57)
		{
			is_numeric = 0;
			return (is_numeric);
		}
		p++;
	}
	return (is_numeric);
}
