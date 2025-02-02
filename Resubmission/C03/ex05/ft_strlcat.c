/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:28:12 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:44:13 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = 0;
	dest_size = 0;
	if (size > 0)
	{
		while (dest[src_size])
			src_size++;
		while (src[dest_size] && src_size < size)
		{
			dest[src_size] = src[dest_size];
			dest_size++;
			src_size++;
		}
		if (src_size <= size)
			dest[src_size] = '\0';
	}
	return (src_size);
}
