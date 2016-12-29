/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:32:06 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/29 20:38:10 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char		*ft_itoa(int n)
{
	static size_t	len;
	size_t			isneg;
	long int		nbr;
	static char		*number;

	if (!len)
		len = 0;
	isneg = 0;
	nbr = n;
	number = NULL;
	if (nbr < 0 && nbr >= 2147483648)
	{
		nbr *= -1;
		len++;
		isneg = 1;
	}
	if (nbr % 10 != nbr)
	{
		len++;
		ft_itoa(nbr / 10);
	}
	if (nbr % 10 == nbr)
	{
		len++;
		number = (char *)malloc(len + 1);
		if (number == NULL)
			return (NULL);
		number[len] = '\0';
	}
	*number = (nbr % 10 + '0');
	number++;
	if (isneg)
		number[0] = '-';
	return (number - len);
}
