/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:32:06 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 02:24:17 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (n && (n % 10 != n))
		((n % 10 != n) ? (len = ft_int_len(n / 10, (len + 1))) : (len = len + 1));
	return (len);
}

char		*ft_itoa(int n)
{
	size_t		pos;
	char		*buff;
	char		isneg;
	int			end;
	long int	n2;

	n2 = (long int)n;
	end = 0;
	isneg = '+';
	if (n2 && n2 <= 2147483647 && n2 >= -2147483648)
	{
		((n2 < 0) ? (isneg = '-') : (isneg = '+'));
		((n2 < 0) ? (n2 = -n2) : n2);
		((isneg == '-') ? (pos = ft_int_len(n2, 2)) : (pos = ft_int_len(n2, 1)));
		buff = (char*)malloc(sizeof(char) * (pos + 1));
		if (!buff)
			return (NULL);
		buff[pos--] = 0;
		((isneg == '-') ? (buff[0] = '-') : (buff[pos]));
		while (end != 1)
		{
			buff[pos--] = n2 % 10 + '0';
			((n2 % 10 == n2) ? (end = 1) : (n2 = n2 / 10));
		}
	}
	else
	{
		buff = (char*)malloc(sizeof(char) * 2);
		if (!buff)
			return (NULL);
		pos = 1;
		buff[pos--] = 0;
		buff[pos] = '0';
	}
	return (buff);
}

// int	main(void)
// {
// 	char *i1 = ft_itoa((-2147483647 -1));
//
// 	if (atoi(i1) != (-2147483647 -1))
// 		printf(" your number is %s Should be : %i\n", ft_itoa(-2147483647 - 1), atoi(i1));
// // 	char *i1 = ft_itoa(-623);
// //
// // 	if (strcmp(i1, "-623"))
// // 	{
// // 		printf(" your number is - %s - should be - -623 -\n", i1);
// // 	}
// 	return (0);
// }
