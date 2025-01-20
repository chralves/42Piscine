/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:00:02 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/20 14:00:57 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

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
	unsigned int	dest_size;

	dest_size = get_string_size(dest);
	p = 0;
	while (src[p] != '\0' && p < (size -1))
	{
		dest[p] = src[p];
		p++;
	}
	while (p < size)
	{
		dest[p] = '\0';
		p++;
	}
	return (size);
}
