/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:14:44 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:27:33 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha_numeric(char c)
{
	int	is_alpha;

	is_alpha = 0;
	if (c >= '0' && c <= '9')
	{
		is_alpha = 1;
	}
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		is_alpha = 1;
	}
	return (is_alpha);
}

char	*ft_strcapitalize(char *str)
{
	int	p;
	int	cap_n;

	p = 0;
	cap_n = 1;
	while (str[p] != '\0')
	{
		if ((str[p] >= 'a' && str[p] <= 'z') && (cap_n == 1))
		{
			str[p] -= 32;
		}
		else if ((str[p] >= 'A' && str[p] <= 'Z') && (cap_n == 0))
		{
			str[p] += 32;
		}
		cap_n = 0;
		if (ft_is_alpha_numeric(str[p]) == 0)
		{
			cap_n = 1;
		}
		p++;
	}
	return (str);
}
