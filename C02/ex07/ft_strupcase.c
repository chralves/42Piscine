/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:44:16 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 11:46:07 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 97 && str[p] <= 122)
		{
			str[p] -= 32;
		}
		p++;
	}
	return (str);
}
