/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:01:46 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/30 14:06:51 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*array;
	int	range;
	int	i;

	i = 0;
	range = max - min;

	array = (int*)malloc(range * sizeof(int));

	if (array == NULL || range == 0)
		return (0);

	while (i < range)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
