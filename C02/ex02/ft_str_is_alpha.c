/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 10:41:03 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 10:43:07 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	p;

	is_alpha = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 65 || (str[p] > 90 && str[p] < 97) || str[p] > 122)
		{
			is_alpha = 0;
			return (is_alpha);
		}
		p++;
	}
	return (is_alpha);
}
