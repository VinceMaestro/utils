/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/27 18:05:18 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		buff;
	char	sign;

	sign = 'u';
	i = 0;
	buff = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
		{
			if (i > 0)
				buff *= 10;
			buff += (str[i] - 48);
		}
		else if (buff > 0)
			return (buff);
		else if ((str[i] == '-' || str[i] == '+') && sign == 'u')
			sign = str[i];
		else if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' \
			&& str[i] != '\r' && str[i] != '\v' && str[i] != '\f')
			return (0);
		i++;
	}
	if (sign == '-')
		return (-buff);
	return (buff);
}
