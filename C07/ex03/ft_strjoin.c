/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:41:06 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/04 17:16:21 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	k = 0;
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		join_size;

	i = 0;
	join_size = 0;
	while (i++ < size)
		join_size += ft_strlen(strs[i - 1]);
	if (size > 1)
		join_size += ft_strlen(sep) * (size - 1);
	join = (char *)malloc(sizeof(char) * (join_size + 1));
	if (join == NULL)
		return (NULL);
	join[0] = '\0';
	if (size == 0)
		return (join);
	i = 0;
	while (i++ < (size))
	{
		ft_strcat(join, strs[i - 1]);
		if ((i - 1) < size - 1)
			ft_strcat(join, sep);
	}
	join[join_size] = '\0';
	return (join);
}
