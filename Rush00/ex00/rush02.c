/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  dipatric <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:05:43 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/19 13:13:11 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	get_lines(int x, int y, int line, int row)
{
	if (line == 1 || line == y)
	{
		return ('B');
	}
	if (row == 1 || row == x)
	{
		return ('B');
	}
	else
	{
		return (' ');
	}
}

char	get_letter(int x, int y, int line, int row)
{
	if ((line == 1 && row == 1) || (line == 1 && row == x))
	{
		return ('A');
	}
	else if ((line == y && row == x) || (line == y && row == 1))
	{
		return ('C');
	}
	else
	{
		return (get_lines(x, y, line, row));
	}
}

void	rush(int x, int y)
{
	int		line;
	int		row;
	char	to_print;

	if (x <= 0 || y <= 0 || x > 211 || y > 54)
	{
		write(1, "Size not valid. Exit...\n", 24);
		return ;
	}
	line = 1;
	while (line <= y)
	{
		row = 1;
		while (row <= x)
		{
			to_print = get_letter(x, y, line, row);
			ft_putchar(to_print);
			row++;
		}
		line++;
		ft_putchar('\n');
	}
}
