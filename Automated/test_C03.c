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

#include "./ex00/ft_strcmp.c"
#include "./ex01/ft_strncmp.c"
#include "./ex02/ft_strcat.c"
#include "./ex03/ft_strncat.c"
#include "./ex04/"


int	main(void)
{
	printf("Testando ft_strcmp()\n");

	printf("ABC and ABC difference is [0]: %d\n", ft_strcmp("ABC", "ABC"));
	printf("ABC and AB difference is[67]: %d\n", ft_strcmp("ABC", "AB"));
	printf("ABA and ABZ difference is [-25]: %d\n", ft_strcmp("ABA", "ABZ"));
	printf("ABJ and ABC difference is [7]: %d\n", ft_strcmp("ABJ", "ABC"));
	printf("201 and 202 difference is [-1]: %d\n", ft_strcmp("201", "202"));

	printf("\n\n");

	printf("Testando ft_strncmp()\n");

	printf("ABCA and ABCXYZ difference (3) is [0]: %d\n", ft_strncmp("ABC", "ABC", 3));
	printf("ABC and AB difference (2) is [0]: %d\n", ft_strncmp("ABC", "AB", 2));
	printf("ABA and ABZ difference (3) is [-25]: %d\n", ft_strncmp("ABA", "ABZ", 3));
	printf("ABJ and ABC difference (3) is [7]: %d\n", ft_strncmp("ABJ", "ABC", 3));
	printf("201 and 202 difference (10) is [-1]: %d\n", ft_strncmp("201", "202", 10));

	printf("\n\n");

	printf("Testando ft_strcat()\n");

	char	src1[5] = "Abcde";
	char	dest1[10] = "12345";

	//printf("Final string 1 is: %s\n", ft_strcat(dest1, src1));

	char	src2[5] = "12345";
	char	dest2[10] = "ABCDE";

	//printf("Final string 2 is: %s", ft_strcat(dest2, src2));

	printf("\n\n");

	printf("Testando ft_strncat()\n");

	char	src3[5] = "Abcde";
	char	dest3[15] = "12345";

	printf("Final string 3 is: %s\n", ft_strncat(dest3, src3, 2));

	char	src4[5] = "12345";
	char	dest4[8] = "ABC";

	printf("Final string 4 is: %s", ft_strncat(dest4, src4, 3));

	printf("\n\n");


}