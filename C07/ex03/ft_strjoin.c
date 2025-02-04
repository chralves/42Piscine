/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:41:06 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/04 11:29:48 by chgonzal         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src, char *sep)
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
	if (ft_strlen(sep) != 0)
	{
		while (sep[k] != '\0')
		{
			dest[i + j + k] = sep[k];
			k++;
		}
		j += k;
	}
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
	if (join_size > 0)
	{
		join = (char *)malloc(sizeof(char) * (join_size + 1));
		if (join == NULL)
			return (NULL);
	}
	else
		return(NULL);
	join[0] = '\0';
	i = 0;
	while (i++ < (size - 1))
		ft_strcat(join, strs[i - 1], sep);
	ft_strcat(join, strs[i - 1], "");
	join[join_size] = '\0';
	return (join);
}
/*
#include <stdio.h>

int main() {
    char *strs1[] = {"Hello", "World"};
    char *strs2[] = {"", "abc", "def"};
    char *strs3[] = {"", "", ""};
    
    // Caso 1: Array vacío
    printf("Case 1: %s\n", ft_strjoin(0, NULL, ""));
    
    // Caso 2: Un solo string
    printf("Case 2: %s\n", ft_strjoin(1, strs1, ""));
    
    // Caso 3: Dos strings sin separador
    printf("Case 3: %s\n", ft_strjoin(2, strs1, ""));
    
    // Caso 4: Dos strings con separador
    printf("Case 4: %s\n", ft_strjoin(2, strs1, ","));
    
    // Caso 5: Tres strings con separador
    printf("Case 5: %s\n", ft_strjoin(3, strs3, ","));
    
    // Caso 6: Strings vacíos en el array
    printf("Case 6: %s\n", ft_strjoin(3, strs2, ","));
    
    // Caso 7: Strings vacíos y separador vacío
    printf("Case 7: %s\n", ft_strjoin(3, strs3, ""));
    
    // Caso 8: Separador con un solo carácter
    printf("Case 8: %s\n", ft_strjoin(3, strs1, "-"));
    
    // Caso 9: String largo
    char *long_str[] = {"this_is_a_very_long_string_that_is_going_to_be_tested"};
    printf("Case 9: %s\n", ft_strjoin(1, long_str, ""));
    
    // Caso 10: Error en malloc
    // Esto se probaría forzando un fallo en malloc, pero no se puede hacer directamente en código de usuario.
    return 0;
}
*/