/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 09:54:42 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/29 10:23:36 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	p;

	p = 0;
	while (src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		lenght;

	lenght = ft_strlen(src);

	new_string = (char*)malloc((lenght + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return(0);
	}
	else
	{
		ft_strcpy(new_string, src);
	}
	return(new_string);
}