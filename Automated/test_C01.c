/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_C01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 09:50:52 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/19 09:51:32 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "./ex00/ft_ft.c"
#include "./ex01/ft_ultimate_ft.c"
#include "./ex02/ft_swap.c"
#include "./ex03/ft_div_mod.c"
#include "./ex04/ft_ultimate_div_mod.c"
#include "./ex05/ft_putstr.c"
#include "./ex06/ft_strlen.c"
#include "./ex07/ft_rev_int_tab.c"
#include "./ex08/ft_sort_int_tab.c"

int	main(void)
{
	printf("Testando ft_ft() '56 a 42'\n\n");

	int	num;

	num = 56;

	printf("De %d ", num);
	ft_ft(&num);
	printf("a %d", num);

	printf("\n\n");

	printf("Testando ft_ultimate_ft '56 a 42'\n\n");

	int	num2;
	int	p;
	int*	pointer[9];
	num2 = 56;
	pointer[0] = &num2;
	p = 1;

	while (p < 9)
	{
		pointer[p] = &pointer[p -1];
		p++;
	}

	printf("De %d ", num2);
	ft_ultimate_ft(pointer[8]);
	printf("a %d", num2);

	printf("\n\n");

	printf("Testando ft_swap() '11 22 to 22 11'\n\n");

	int	num3;
	int	num4;

	num3 = 11;
	num4 = 22;

	printf("Trocamos %d e %d ", num3, num4);
	ft_swap(&num3, &num4);
	printf("Por %d e %d ", num3, num4);

	printf("\n\n");

	printf("Testando ft_div_mod() '21 / 10'\n\n");

	int	num5 = 21;
	int	num6 = 10;
	int	div = 0;
	int	mod = 0;

	printf("%d entre %d , da %d e resto %d\n", num5, num6, div, mod);
	ft_div_mod(num5, num6, &div, &mod);
	printf("%d entre %d , da %d e resto %d", num5, num6, div, mod);
	
	printf("\n\n");

	printf("Testando ft_ultimate_div_mod() '21 / 10'\n\n");

	int	num7 = 21;
	int	num8 = 10;

	printf("%d entre %d\n", num7, num8);
	ft_ultimate_div_mod(&num7, &num8);
	printf("Da %d e resto %d", num7, num8);

	printf("\n\n");

	printf("Testando ft_putstr()\n\n");

	char	text[] = "Texto de teste! Viva 42!!!";

	ft_putstr(&text);

	printf("\n\n");

	printf("Testando ft_strlen(char *str) '26'\n\n");

	printf("O texto tem size: %d", ft_strlen(&text));

	printf("\n\n");

	printf("Testando ft_rev_int_tab() '{25, 5, 52, 2, 100, 1}'\n\n");

	int	pos = 0;

	int	num_array[] = {25, 5, 52, 2, 100, 1};

	ft_rev_int_tab(&num_array, 6);

	while (pos < 6)
	{
		printf("%i - ", num_array[pos]);
		pos++;
	}
	printf("\n\n");

	printf("Testando ft_sort_int_tab() '{25, 5, 52, 2, 100, 1}'\n\n");

	int	pos2 = 0;

	int	num_array2[] = {25, 5, 52, 2, 100, 1};

	ft_sort_int_tab(&num_array2, 6);

	while (pos2 < 6)
	{
		printf("%i - ", num_array2[pos2]);
		pos2++;
	}
	printf("\n\n");
}
