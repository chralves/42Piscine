/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:14:49 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/18 14:15:24 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	position;
	int	temp;

	position = 0;
	while (position < size - 1)
	{
		if ((tab[position] > tab[position + 1]) && position >= 0)
		{
			temp = tab[position];
			tab[position] = tab[position + 1];
			tab[position + 1] = temp;
			position--;
		}
		else
		{
			position++;
		}
	}
}
