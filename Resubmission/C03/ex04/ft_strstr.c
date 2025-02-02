/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:37:59 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/02 14:44:17 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	is_needle(char *str, char *needle, int p)
{
	int	i;
	int	j;

	i = 0;
	j = p;
	while (needle[i])
	{
		if (needle[i] != str[j] && needle[i] != '\0')
		{
			return (-1);
		}
		i++;
		j++;
	}
	return (p);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	p;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (&str[0]);
	}
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			p = is_needle(str, to_find, i);
			if (p >= 0)
			{
				return (&str[p]);
			}
		}
		i++;
	}
	return (0);
}
