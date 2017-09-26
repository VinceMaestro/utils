/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 13:56:04 by igradea           #+#    #+#             */
/*   Updated: 2017/04/03 14:38:07 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	char	tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
	   	'B', 'C', 'D', 'E', 'F'};
	char	*str;
	int		len;
	int		neg;
	int		tmp;

	neg = 0;
	len = 0;
	if (value == -2147483648 && base == 10)
		return ("-2147483648");
	if (value < 0 && base == 10)
	{
		value *= -1;
		neg = 1;
		len++;
	}
	else if (value < 0)
		value *= -1;
    else if (value == 0)
        return ("0");
	tmp = value;
	while (tmp > 0)
	{
		len++;
		tmp = tmp / base;
	}
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len--;
	while (value > 0)
	{
		str[len] = tab[value % base];
		len--;
		value = value / base;
	}
	if (neg == 1)
		str[len] = '-';
	return (str);
}
