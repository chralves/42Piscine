/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_C02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 15:40:55 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/19 15:42:24 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#include "./ex00/ft_strcpy.c"
#include "./ex01/ft_strncpy.c"
#include "./ex02/ft_str_is_alpha.c"
#include "./ex03/ft_str_is_numeric.c"
#include "./ex04/ft_str_is_lowercase.c"
#include "./ex05/ft_str_is_uppercase.c"
#include "./ex06/ft_str_is_printable.c"
#include "./ex07/ft_strupcase.c"
#include "./ex08/ft_strlowcase.c"
#include "./ex09/ft_strcapitalize.c"
#include "./ex10/ft_strlcpy.c"
#include "./ex11/ft_putstr_non_printable.c"

int	main(void)
{
	printf("Testando ft_strcpy()\n");

	char	source[] = "Texto a copiar";
	char	destination[] = "Texto maior onde copiar";

	printf("S: %s\n", source);
	printf("D: %s\n", destination);

	ft_strcpy(destination, source);

	printf("C: %s\n", destination);

	printf("\n\n");

	printf("Testando ft_strncpy()\n");

	char	source2[] = "Abcdefg";
	char	destination2[] = "1234567";
	char	destination3[] = "Texto menor";
	int	size1 = 3;
	int	size2 = 11;

	printf("S1: %s\n", source2);
	printf("D1: %s\n", destination2);

	ft_strncpy(destination2, source2, size1);

	printf("S1: %s\n", source2);
	printf("C1: %s\n", destination2);

	printf("S2: %s\n", source2);
	printf("D2: %s\n", destination3);

	ft_strncpy(destination3, source2, size2);

	printf("S2: %s\n", source2);
	printf("C2: %s\n", destination3);

	printf("\n\n");

	printf("Testando ft_str_is_alpha()\n");

	char	alpha[] = "Abcedefg";
	char	alpha2[] = "";
	char	alpha3[] = "Asv123";

	printf("%s da %d.\n", alpha, ft_str_is_alpha(alpha));
	printf("%s da %d.\n", alpha2, ft_str_is_alpha(alpha2));
	printf("%s da %d.\n", alpha3, ft_str_is_alpha(alpha2));

	printf("\n\n");

	printf("Testando ft_str_is_numeric()\n");

	char	numeric[] = "1235468";
	char	numeric2[] = "";
	char	numeric3[] = "Asv123";

	printf("%s da %d.\n", numeric, ft_str_is_numeric(numeric));
	printf("%s da %d.\n", numeric2, ft_str_is_numeric(numeric2));
	printf("%s da %d.\n", numeric3, ft_str_is_numeric(numeric3));

	printf("\n\n");

	printf("Testando ft_str_is_lowercase()\n");

	char	lower[] = "asdfgasdg";
	char	lower2[] = "";
	char	lower3[] = "AbsdfdsD";

	printf("%s da %d.\n", lower, ft_str_is_lowercase(lower));
	printf("%s da %d.\n", lower2, ft_str_is_lowercase(lower2));
	printf("%s da %d.\n", lower3, ft_str_is_lowercase(lower3));

	printf("\n\n");

	printf("Testando ft_str_is_uppercase()\n");

	char	upper[] = "ABJSUFD";
	char	upper2[] = "";
	char	upper3[] = "AScsda";

	printf("%s da %d.\n", upper, ft_str_is_uppercase(upper));
	printf("%s da %d.\n", upper2, ft_str_is_uppercase(upper2));
	printf("%s da %d.\n", upper3, ft_str_is_uppercase(upper3));

	printf("\n\n");

	printf("Testando ft_str_is_printable()\n");

	char	print[] = "Absd!@@#43545[]";
	char	print2[] = "1223 jksaldj908*123213";
	char	print3[] = "Hello\tWorld";

	printf("%s da %d.\n", print, ft_str_is_printable(print));
	printf("%s da %d.\n", print2, ft_str_is_printable(print2));
	printf("%s da %d.\n", print3, ft_str_is_printable(print3));

	printf("\n\n");

	printf("Testando ft_strupcase()\n");

	char	big[] = "Olha que coisa gira";
	char	big2[] = "Com n4mer0s e \t T4bs";

	printf("S: %s, ", big);
	printf("da: %s\n", ft_strupcase(big));
	printf("S: %s, ", big2);
	printf("da: %s\n", ft_strupcase(big2));

	printf("\n\n");

	printf("Testando ft_strlowcase()\n");

	char	little[] = "IstO ESTa MESmO Feio";
	char	little2[] = "CoM N4M3R0s e \t T4BS";

	printf("S: %s, ", little);
	printf("da: %s\n", ft_strlowcase(little));
	printf("S: %s, ", little2);
	printf("da: %s\n", ft_strlowcase(little2));

	printf("\n\n");

	printf("Testando ft_strcapitalize()\n");

	char	capital[] = "A ver como Fica ISTO 456";
	char	capital2[] = "use+diFERent sPAce-chARs*to#t3st";

	printf("S: %s, ", capital);
	printf("da: %s\n", ft_strcapitalize(capital));
	printf("S: %s, ", capital2);
	printf("da: %s\n", ft_strcapitalize(capital2));

	printf("\n\n");

	printf("Testando ft_strlcpy()\n");

	char	source3[] = "Long text to test";
	char	destination4[] = "Copy the string here";
	char	destination5[] = "Or here";
	int	size4 = 21;
	int	size5 = 8;

	printf("S1: %s\n", source3);
	printf("D1: %s\n", destination4);

	ft_strlcpy(destination4, source3, size4);

	printf("S1: %s\n", source3);
	printf("C1: %s\n", destination4);

	printf("S2: %s\n", source3);
	printf("D2: %s\n", destination5);

	ft_strlcpy(destination5, source3, size5);

	printf("S2: %s\n", source3);
	printf("C2: %s\n", destination5);

	printf("\n\n");

	printf("Testando ft_putstr_non_printable()\n");
	
	ft_putstr_non_printable("Teste\nnumero 1\t.");
	printf("\n\n");
	ft_putstr_non_printable("Teste\rnumero 2\b");

	printf("\n\n");
}