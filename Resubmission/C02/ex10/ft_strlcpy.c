/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:00:02 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:27:36 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_string_size(char *str)
{
	unsigned int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	p;
	unsigned int	src_size;

	src_size = get_string_size(src);
	p = 0;
	while (src[p] != '\0' && p + 1 < size)
	{
		dest[p] = src[p];
		p++;
	}
	if (size > 0)
	{
		dest[p] = '\0';
	}
	return (src_size);
}
