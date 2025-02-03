/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgonzal <chgonzal@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:51:54 by chgonzal          #+#    #+#             */
/*   Updated: 2025/02/03 14:34:14 by chgonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char a, char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		if (sep[i] == a)
			return (1);
		i++;
	}
	return (0);
}

int	split_counter(char *str, char *charset)
{
	int	i;
	int	in_word;
	int	words;

	i = 0;
	in_word = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (!is_separator(str[i], charset) && in_word == 0)
			in_word = 1;
		else if (is_separator(str[i], charset) && in_word == 1)
		{
			words += 1;
			in_word = 0;
		}
		i++;
	}
	if (in_word == 1)
		words += 1;
	return (words);
}

void	*add_word(char *str, int begin, int size)
{
	char	*string;
	int		i;

	string = (char *)malloc(sizeof(char) * (size + 1));
	if (string == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		string[i] = str[begin + i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		index;
	int		begin;

	i = 0;
	index = 0;
	begin = -1;
	array = (char **)malloc(sizeof(char *) * split_counter(str, charset) + 1);
	if (array == NULL)
		return (0);
	while (str[i++] != '\0')
	{
		if (!is_separator(str[i - 1], charset) && begin == -1)
			begin = i - 1;
		else if (is_separator(str[i - 1], charset) && begin != -1)
		{
			array[index++] = add_word(str, begin, i - begin - 1);
			begin = -1;
		}
	}
	if (begin != -1)
		array[index++] = add_word(str, begin, i - begin);
	array[index] = NULL;
	return (array);
}
