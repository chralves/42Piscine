/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:32:01 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/29 15:39:17 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	array = (int*)malloc(diff * sizeof(int));
	if (array == NULL || diff <= 0)
	{
		*range = NULL;
		return (-1);
	}
	*range = array;
	while (i < diff)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (diff);
}