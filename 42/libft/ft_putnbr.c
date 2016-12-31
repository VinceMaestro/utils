/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:00:23 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 03:59:47 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr_neg(long int nbr)
{
	char	buff;

	(nbr % 10 != nbr) ? (ft_putnbr_neg(nbr / 10)) : (write(1, "-", 1));
	buff = '0' + nbr % 10;
	write(1, &buff, 1);
	return (0);
}

int		ft_putnbr(int nbr)
{
	long int	buff;

	buff = '0';
	if (nbr < 0)
		return (ft_putnbr_neg(-(long int)nbr));
	(nbr % 10 != nbr) ? (ft_putnbr(nbr / 10)) : buff;
	buff = '0' + nbr % 10;
	write(1, &buff, 1);
	return (0);
}

// int	main(void)
// {
// 	ft_putnbr(15000);
// 	return (0);
// }
//
// int		ft_putnbr(int nbr)
// {
// 	long	conv_nbr;
// 	char	buff;
//
// 	if (nbr > )
// 	conv_nbr = (long)nbr;
// 	printf("%li", conv_nbr);
// 	if (conv_nbr < 0)
// 	{
// 		write(1, (const void*)45, 1);
// 		conv_nbr = -conv_nbr;
// 	}
// 	while (conv_nbr % 10 != conv_nbr)
// 	{
// 		buff = 48 + conv_nbr % 10;
// 		conv_nbr = conv_nbr / 10;
// 		ft_putchar(buff);
// 	}
// 	buff = 48 + conv_nbr % 10;
// 	ft_putchar(buff);
// 	return (0);
// }
