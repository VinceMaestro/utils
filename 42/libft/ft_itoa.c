/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:32:06 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/30 22:00:19 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// char		*ft_itoa(int n)
// {
// 	static size_t	len;
// 	size_t			isneg;
// 	long int		nbr;
// 	static char		*number;
//
// 	if (!len)
// 		len = 0;
// 	isneg = 0;
// 	nbr = n;
// 	number = NULL;
// 	if (nbr < 0 && nbr >= 2147483648)
// 	{
// 		nbr *= -1;
// 		len++;
// 		isneg = 1;
// 	}
// 	if (nbr % 10 != nbr)
// 	{
// 		len++;
// 		ft_itoa(nbr / 10);
// 	}
// 	if (nbr % 10 == nbr)
// 	{
// 		len++;
// 		number = (char *)malloc(len + 1);
// 		if (number == NULL)
// 			return (NULL);
// 		number[len] = '\0';
// 	}
// 	*number = (nbr % 10 + '0');
// 	number++;
// 	if (isneg)
// 		number[0] = '-';
// 	return (number - len);
// }

static int	ft_int_len(int n, int len)
{
	if (n)
		n % 10 != n ? ft_int_len(n / 10, len++) : len;
	return (len);
}

char		*ft_itoa(int n)
{
	size_t		pos;
	char		*buff;
	char		isneg;
	int			end;
	int			i;

	i = 0;
	end = 0;
	isneg = '+';
	if (n)
	{
		((n < 0) ? (isneg = '-') : (isneg = '+'));
		((n < 0) ? (n = -n) : n);
		((isneg == '-') ? (pos = ft_int_len(n, 1)) : (pos = ft_int_len(n, 0)));
		buff = (char*)malloc(sizeof(char) * (pos + 1));
		buff[pos--] = 0;
		((isneg == '-') ? (buff[0] = '-') : (buff[pos]));
		while (end != 1)
		{
			buff[pos] = n % 10 + '0';
			pos--;
			((n % 10 == n) ? (end = 1) : (n = n / 10));
		}
	}
	else
	{
		buff = (char*)malloc(sizeof(char) * 2);
		pos = 1;
		buff[pos--] = 0;
		buff[pos] = '0';
	}
	printf(" your number is %s\n" , buff);
	return (buff);
}

int	main(void)
{
	char *i1 = ft_itoa(-623);
	char *i2 = ft_itoa(156);
	char *i3 = ft_itoa(-0);

	if (strcmp(i1, "-623"))
	{
		printf(" your number is - %s - should be - -623 -\n", i1);
	}
	if (strcmp(i2, "156"))
	{
		printf(" your number is - %s - should be - 156 -\n", i2);
	}
	if (strcmp("0", i3))
	{
		printf(" your number is - %s - should be - 0 -\n", i3);
	}
	// printf(" your number is %s\n" , ft_itoa(123456000));
	return (0);
}
