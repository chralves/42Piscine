/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:06:39 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/05 10:12:53 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
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
	new_string = (char *)malloc((lenght + 1) * sizeof(char));
	if (new_string == NULL)
		return (0);
	else
		ft_strcpy(new_string, src);
	return (new_string);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*s;

	s = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		i++;
	}
	s[i].str = 0;
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
    char *strings[]={ "str1", "0", "", "str2" };
    //struct s_stock_str *s1;
    t_stock_str *s1;
    int i = 0;
    int n = 4;
    s1 = ft_strs_to_tab(n, &*strings);
    while (i <= n)
    {
        printf("%d %s %s\n", s1[i].size, s1[i].str, s1[i].copy);
        i++;
    }
    free(s1);
    return (0);
}
*/