/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 09:58:27 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/28 21:31:50 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root <= nb)
	{
		if ((root * root) == nb)
			return (root);
		else if ((root * root) > nb)
			return (0);
		root++;
	}
	return (0);
}
