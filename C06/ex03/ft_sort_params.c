/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:51:52 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/28 17:28:32 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		else
		{
			return (s1[i]);
		}
		i++;
	}
	if (s2[i] != '\0')
	{
		return (-s2[i]);
	}
	return (0);
}

void	ft_sort_args(char **arg, int size)
{
	int		position;
	char	*temp;

	position = 1;
	while (position < size - 1)
	{
		if (ft_strcmp(arg[position], arg[position + 1]) > 0 && position > 0)
		{
			temp = arg[position];
			arg[position] = arg[position + 1];
			arg[position + 1] = temp;
			position--;
		}
		else
		{
			position++;
		}
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		ft_sort_args(argv, argc);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
