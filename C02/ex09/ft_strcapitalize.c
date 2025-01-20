/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:14:44 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 12:15:16 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	p;
	int	cap_n;

	p = 0;
	cap_n = 1;
	while (str[p] != '\0')
	{
		if ((str[p] >= 97 && str[p] <= 122) && (cap_n == 1))
		{
			str[p] -= 32;
		}
		else if ((str[p] >= 65 && str[p] <= 90) && (cap_n == 0))
		{
			str[p] += 32;
		}
		cap_n = 0;
		if (str[p] <= 47 || (str[p] > 90 && str[p] < 94) || str[p] >= 123)
		{
			cap_n = 1;
		}
		p++;
	}
	return (str);
}
