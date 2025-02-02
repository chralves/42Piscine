/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:23:33 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:27:21 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_upper_case;
	int	p;

	is_upper_case = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 65 || str[p] > 90)
		{
			is_upper_case = 0;
			return (is_upper_case);
		}
		p++;
	}
	return (is_upper_case);
}
