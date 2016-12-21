/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:27:34 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/21 19:07:35 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_fd(int nbr, int fd)
{
	int buff;

	if (nbr % 10 != nbr)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	buff = 48 + (nbr % 10);
	write(fd, &buff, 1);
	return (0);
}
