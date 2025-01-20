/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:51:36 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/18 12:52:40 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	position;
	int	temp;

	position = 0;
	while (position < size)
	{
		temp = tab[position];
		tab[position] = tab[size - 1];
		tab[size - 1] = temp;
		position++;
		size--;
	}
}
