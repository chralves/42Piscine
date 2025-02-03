/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:14:23 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/03 18:29:16 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_putnbr(int nb)
{
	char	num_array[11];
	int		i;

	i = 0;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 9)
	{
		num_array[i++] = '0' + (nb % 10);
		nb = nb / 10;
	}
	num_array[i] = nb + '0';
	while (i >= 0)
	{
		write(1, &num_array[i--], 1);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

#include <stdio.h>
int main(void)
{

	struct s_stock_str s1;
    s1.size = 0;
    s1.str = 0;

    ft_show_tab(&s1);
    return (0);
}