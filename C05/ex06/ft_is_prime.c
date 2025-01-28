/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:19:09 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/28 10:43:05 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	factor;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return(1);
	factor = 2;
	while(factor < nb)
	{
		if (nb % factor == 0)
			return (0);
		factor++;
	}
	return (1);
}
