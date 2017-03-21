/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 19:26:37 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/03 21:07:07 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

//gcc ft_atoi.c ft_isdigit.c ft_isinvisible.c main_ft_atoi.c

#define RANDT	512

int	main(void)
{
	// size_t		i;
	// size_t		j;
	// char		str[12] = {0};
	// int			rand_char;
	//
	// if (atoi("\n\v\t\r\f -123") != ft_atoi("\n\v\t\r\f -123"))
	// 	printf("test 1 FAIL !\n");
	// if (atoi("12-3") != ft_atoi("12-3"))
	// 	printf("test 2 FAIL !\n");
	// if (atoi("-+123") != ft_atoi("-+123"))
	// 	printf("test 3 FAIL !\n");
	// if (atoi("a123") != ft_atoi("a123"))
	// 	printf("test 4 FAIL !\n");
	// if (atoi("123a") != ft_atoi("123a"))
	// 	printf("test 5 FAIL !\n");
	// if (atoi("123") != ft_atoi("123"))
	// 	printf("test 6 FAIL !\n");
	// if (atoi("-123") != ft_atoi("-123"))
	// 	printf("test 7 FAIL !\n");
	// if (atoi("+123") != ft_atoi("+123"))
	// 	printf("test 8 FAIL !\n");
	// if (atoi(" - 123") != ft_atoi(" - 123"))
	// 	printf("test 9 FAIL !\n");
	// if (atoi("\t -123") != ft_atoi("\t -123"))
	// 	printf("test 10 FAIL !\n");
	// if (atoi("-2147483648") != ft_atoi("-2147483648"))
	// 	printf("test 11 FAIL !\n");
	// if (atoi("2147483647") != ft_atoi("2147483647"))
	// 	printf("test 12 FAIL !\n");
	// if (atoi("") != ft_atoi(""))
	// 	printf("test 13 FAIL !\n");
	// i = 0;
	// // unsigned long long okok(18446744073709551615);
	// while (i < RANDT)
	// {
	// 	j = 0;
	// 	while (j < 10)
	// 	{
	// 		rand_char = (rand() % 10) + '0';
	// 		str[j] = ((char)rand_char);
	// 		j++;
	// 	}
	// 	str[11] = 0;
	// 	if (atoi(str) != ft_atoi(str))
	// 		printf("STR IS :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", str, atoi(str), ft_atoi(str));
	// 	i++;
	// }
	//printf("STR IS :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", "18446744073709551615", atoi("18446744073709551615"), ft_atoi("18446744073709551615"));
	// int	i;
	//
	// i = 20;
	char	str[40] = "9223372036854775809";
	printf("STR :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", str, atoi(str), ft_atoi(str));
	char	str2[40] = "-9223372036854775809";
	// char	str2[25] = "9223372036854775808";
	printf("STR 2 :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", str2, atoi(str2), ft_atoi(str2));
	// while (atoi(str) != ft_atoi(str))
	// {
		// if (atoi(str) != ft_atoi(str))
		// 	printf("STR :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", str, atoi(str), ft_atoi(str));
	// }
	// i = 20;
	// while (str2[0])
	// {
	// 	if (atoi(str2) != ft_atoi(str2))
	// 		printf("STR 2 :  %s  REAL ATOI RETURN :  %d  MINE :  %d\n", str2, atoi(str2), ft_atoi(str2));
	// 		str2[i--] = 0;
	// }
	return (1);
}
