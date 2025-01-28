/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:35:15 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/28 21:36:09 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	n;

	n = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (n <= nb)
	{
		result = result * n;
		n++;
	}
	return (result);
}
