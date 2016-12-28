/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:00:23 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 23:01:56 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// int		ft_putnbr(int nbr)
// {
// 	long int	mult;
// 	long int	buff;
// 	long int	conv_nbr;
//
// 	conv_nbr = (long int)nbr;
// 	mult = 1;
// 	if (conv_nbr < 0)
// 	{
// 		conv_nbr = - conv_nbr;
// 		mult = -1;
// 	}
// 	if (conv_nbr % 10 != conv_nbr)
// 		ft_putnbr((int)conv_nbr / 10);
// 	buff = 48 + conv_nbr % 10;
// 	write(1, &buff, 1);
// 	if (mult == -1)
// 		write(1, "-", 1);
// 	return (0);
// }

int	main(void)
{
	ft_putnbr(15000);
	return (0);
}

int		ft_putnbr(int nbr)
{
	long	conv_nbr;
	char	buff;

	if (nbr > )
	conv_nbr = (long)nbr;
	printf("%li", conv_nbr);
	if (conv_nbr < 0)
	{
		write(1, (const void*)45, 1);
		conv_nbr = -conv_nbr;
	}
	while (conv_nbr % 10 != conv_nbr)
	{
		buff = 48 + conv_nbr % 10;
		conv_nbr = conv_nbr / 10;
		ft_putchar(buff);
	}
	buff = 48 + conv_nbr % 10;
	ft_putchar(buff);
	return (0);
}
