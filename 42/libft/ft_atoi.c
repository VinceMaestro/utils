/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/02 23:16:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

//gcc ft_atoi.c ft_isdigit.c ft_isinvisible.c

static int	ft_check_to_long_input(long int number, char letter, int sign)
{
	unsigned int	new_num;

	new_num = (unsigned int)number;
	if (sign == -1)
	{
		if ((new_num * 10 + letter - 48) > 2147483648)
			return (0);
	}
	else if ((new_num * 10 + letter - 48) > 2147483647)
		return (-1);
	return (1);
}

static int	ft_test_letter(const char *str)
{
	int	letter;

	letter = 0;
	if (str[letter] == '-')
		letter++;
	if (str[letter] == '+' || str[letter] == '-')
		letter++;
	return (letter);
}

static int	ft_test_sign(const char *str)
{
	int	sign;
	int	letter;

	sign = 1;
	letter = 0;
	if (str[letter] == '-')
	{
		sign = -1;
		letter++;
	}
	if ((str[letter] == '+' || str[letter] == '-') && letter)
		sign = 0;
	return (sign);
}

int			ft_atoi(const char *str)
{
	int			letter;
	int			sign;
	long int	number;

	letter = 0;
	number = 0;
	while (ft_isinvisible(str[letter]))
		letter++;
	sign = ft_test_sign(&str[letter]);
	if (!sign)
		return (0);
	letter = letter + ft_test_letter(&str[letter]);
	while (str[letter] && ft_isdigit(str[letter]))
	{
		if (ft_check_to_long_input(number, str[letter], sign) != 1)
			return (ft_check_to_long_input(number, str[letter], sign));
		number = number * 10 + str[letter] - 48;
		letter++;
	}
	return (number * sign);
}

//
// #define RANDT	512
// int	main(void)
// {
// 	size_t		i;
// 	size_t		j;
// 	char		str[12] = {0};
// 	int			rand_char;
//
// 	if (atoi("\n\v\t\r\f -123") != ft_atoi("\n\v\t\r\f -123"))
// 		printf("test 1 FAIL !\n");
// 	if (atoi("12-3") != ft_atoi("12-3"))
// 		printf("test 2 FAIL !\n");
// 	if (atoi("-+123") != ft_atoi("-+123"))
// 		printf("test 3 FAIL !\n");
// 	if (atoi("a123") != ft_atoi("a123"))
// 		printf("test 4 FAIL !\n");
// 	if (atoi("123a") != ft_atoi("123a"))
// 		printf("test 5 FAIL !\n");
// 	if (atoi("123") != ft_atoi("123"))
// 		printf("test 6 FAIL !\n");
// 	if (atoi("-123") != ft_atoi("-123"))
// 		printf("test 7 FAIL !\n");
// 	if (atoi("+123") != ft_atoi("+123"))
// 		printf("test 8 FAIL !\n");
// 	if (atoi(" - 123") != ft_atoi(" - 123"))
// 		printf("test 9 FAIL !\n");
// 	if (atoi("\t -123") != ft_atoi("\t -123"))
// 		printf("test 10 FAIL !\n");
// 	if (atoi("-2147483648") != ft_atoi("-2147483648"))
// 		printf("test 11 FAIL !\n");
// 	if (atoi("2147483647") != ft_atoi("2147483647"))
// 		printf("test 12 FAIL !\n");
// 	if (atoi("") != ft_atoi(""))
// 		printf("test 13 FAIL !\n");
// 	i = 0;
// 	while (i < RANDT)
// 	{
// 		j = 0;
// 		while (j < 10)
// 		{
// 			rand_char = (rand() % 10) + '0';
// 			str[j] = ((char)rand_char);
// 			j++;
// 		}
// 		str[11] = 0;
// 		if (atoi(str) != ft_atoi(str))
// 			printf("STR IS :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", str, atoi(str), ft_atoi(str));
// 		i++;
// 	}
// 	return (1);
// }
