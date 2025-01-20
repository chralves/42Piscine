/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:16:15 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 11:19:08 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	is_lower_case;
	int	p;

	is_lower_case = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 97 || str[p] > 122)
		{
			is_lower_case = 0;
			return (is_lower_case);
		}
		p++;
	}
	return (is_lower_case);
}
