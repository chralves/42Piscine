/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:41:06 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/31 12:15:44 by chgonzal         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src, char *sep)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	j = 0;
	if (ft_strlen(sep) != 0)
	{
		while (sep[j] != '\0')
		{
			dest[i] = sep[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		i;
	int		j;
	int		join_size;

	i = 0;
	join_size = 0;
	while (++i < size)
	{
		join_size += ft_strlen(strs[i - 1]);
	}
	join_size += ft_strlen(sep) * (size - 1);
	join = (char *)malloc(join_size * sizeof(char) + 1);
	if (join == NULL || size == 0)
		return (join);
	join[0] = '\0';
	j = 0;
	while (++j < size)
	{
		ft_strcat(join, strs[j - 1], sep);
	}
	ft_strcat(join, strs[j - 1], "");
	return (join);
}
