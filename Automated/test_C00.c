/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_C00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 08:54:17 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/19 08:54:23 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ex00/ft_putchar.c"
#include "./ex01/ft_print_alphabet.c"
#include "./ex02/ft_print_reverse_alphabet.c"
#include "./ex03/ft_print_numbers.c"
#include "./ex04/ft_is_negative.c"
#include "./ex05/ft_print_comb.c"
#include "./ex06/ft_print_comb2.c"
#include "./ex07/ft_putnbr.c"


int	main(void)
{
	printf("Testando ft_putchar(char c) 'Az3'\n\n");

	ft_putchar('A');
	ft_putchar('z');
	ft_putchar('3');

	printf("\n\n");

	printf("Testando ft_print_alphabet()\n\n");

	ft_print_alphabet();

	printf("\n\n");

	printf("Testando ft_print_reverse_alphabet()\n\n");

	ft_print_reverse_alphabet();

	printf("\n\n");

	printf("Testando ft_print_numbers()\n\n");

	ft_print_numbers();

	printf("\n\n");

	printf("Testando ft_is_negative() 'PNP'\n\n");

	ft_is_negative(128);
	ft_is_negative(-15);
	ft_is_negative(0);

	printf("\n\n");

	printf("Testando ft_print_comb()\n\n");

	ft_print_comb();

	printf("\n\n");

	printf("\n\n");

	printf("Testando ft_print_comb2()\n\n");

	ft_print_comb2();

	printf("\n\n");

	printf("Testando ft_putnbr()\n\n");

	ft_putnbr(111222333444555666);
	ft_putnbr(-777888999);
	ft_putnbr(0);

	printf("\n\n");

}