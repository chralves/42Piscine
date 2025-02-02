/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:32:02 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:27:23 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	p;

	is_printable = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 32 || str[p] > 126)
		{
			is_printable = 0;
			return (is_printable);
		}
		p++;
	}
	return (is_printable);
}
