/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 18:20:28 by chgonzal          #+#    #+#             */
/*   Updated: 2025/01/30 17:06:50 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Escreva uma função que devolva o resultado da conversão da string nbr expressa
de uma base base_from noutra base base_to.

Base from to decimal > Decimal to base to

• nbr, base_from, base_to não serão necessariamente editáveis.

So ler o conteudo e usar variaveis, nao mexer nos pointers...

• nbr seguirá as mesmas regras que ft_atoi_base. Por isso, cuidado com ’+’, ’-’, e
espaços.

Limpar nbr com as condicoes do atoi base

• O número representado por nbr cabe num int.

Nada de longs nem de testar o min int

• Se uma base estiver incorreta, a função devolverá NULL.

Pointer to null neste caso

• O número devolvido deve ser prefixado por apenas um ’-’ se for necessário; nada de
espaços, ou de +.

O problema sera alocar o tamanho do char, sem saber a partida quantos digitos tem o numero.

Devolvemos um char! 

*/
#include <stdio.h>

int	is_space(char a)
{
	if (a == 32 || (a >= 9 && a <= 13))
	{
		return (1);
	}
	return (0);
}
int	get_sign(char a)
{
	if (a == '-')
		return (-1);
	return (1);
}

int	check_valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] && (i != j))
			{
				return (0);
			}
			if (str[j] == '-' || str[j] == '+' || str[j] == ' ')
				return (0);
			j++;
		}
		i++;
	}
	if (i > 1)
		return (i);
	return (0);
}
int	symbol_in_base(char digit, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == digit)
			return (i);
		i++;
	}
	return (-1);
}

int	get_number_in_base_x(char *nbr, char *base, int bn, int sign, int i)
{
	int	number;
	int	to_add;

	number = 0;
	to_add = symbol_in_base(nbr[i], base);
	while (nbr[i++] != '\0' && to_add != -1)
	{
		number = (number * bn) + to_add;
		to_add = symbol_in_base(nbr[i], base);	
	}
	return (number);
}
char	*ft_putnbr_base(int number, int bt, char *base)
{
	if (nbr < 0)
		write(1, "-", 1);
	if (abs(nbr) >= bn)
	{
		remainder = abs(nbr % bn);
		nbr = abs(nbr / bn);
		ft_putnbr_base(nbr, base);
		write(1, &base[remainder], 1);
		return ;
	}
	write(1, &base[nbr], 1);
}



char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	bf;
	int	bt;
	int	sign;
	int	i;
	int	number;
	int	to_add;
	int	ptr_size;
	char *result;


	i = 0;
	sign = 1;
	bf = check_valid_base(base_from);
	if (bf == 0)
		return (0);
	i = 0;
	while (is_space(nbr[i]))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
		sign = sign * get_sign(nbr[i++]);
	number = get_number_in_base_x(nbr, base_from, bn, sign, i);

	bt = check_valid_base(base_to);
	if (bt == 0)
		return (0);

	result = (char*)malloc(sizeof(char) + 1);
	if (join == NULL || size == 0)
		return (join);

	if (sign == -1)
		result[0] = '-';

	ptr_size = 2;

	result = (char*)malloc(sizeof(char) + 1);
	if (join == NULL || size == 0)
		return (join);







	printf("Number is %d\n", number);
}

int main(void)
{
	ft_convert_base("   +++---223", "0123456789", "0123456789");
}