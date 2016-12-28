/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 19:43:56 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isblank(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' \
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	buff;

	i = 0;
	sign = 1;
	buff = 0;
	if (str)
	{
		while (ft_isblank(str[i]))
			i++;
		if (str[i] == '-')
			sign = -1;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (ft_isdigit(str[i]))
		{
			buff = buff * 10 + str[i];
			i++;
		}
		if (buff > sizeof(int))
			return (0);
		return (sign * (int)buff);
	}
	return (0);
}
