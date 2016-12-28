/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 16:42:08 by vpetit           ###   ########.fr       */
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

static int	ft_strtoint(char *str)
{
	int	ret;

	ret = 0;
	while (*str++)
	{
		if (!ft_isdigit(*str))
			return (0);
		ret *= 10;
		ret += *str;
	}
	printf("%i\n", ret);
	return (ret);
}

int			ft_atoi(const char *str)
{
	int		i;
	char	*buff;
	char	sign;

	i = 0;
	buff = NULL;
	if (str)
	{
		while (*str++)
		{
			if (!sign && (*str == '+' || *str == '-'))
				sign = *str;
			else if (ft_isdigit(*str))
			{
				buff[i] = (char)*str;
				i++;
			}
			else if (sign == '-' && !ft_isblank(*str))
				return (-ft_strtoint(buff));
			else
				return (ft_strtoint(buff));
		}
	}
	return (ft_strtoint(buff));
}
