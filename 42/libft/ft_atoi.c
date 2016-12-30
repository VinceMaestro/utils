/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/30 18:47:49 by vpetit           ###   ########.fr       */
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

static int	ft_check_to_long_input(long int number, char letter, int sign)
{
	unsigned int	new_num;

	new_num = (unsigned int)number;
	if (sign == -1)
	{
		if ((new_num * 10 + letter - 48) > 2147483648)
			return (0);
	}
	else if ((new_num * 10 + letter - 48) > 2147483647)
		return (-1);
	return (1);
}

static int	ft_test_letter(const char *str)
{
	int	letter;

	letter = 0;
	if (str[letter] == '-')
		letter++;
	if (str[letter] == '+' || str[letter] == '-')
		letter++;
	return (letter);
}

static int	ft_test_sign(const char *str)
{
	int	sign;
	int	letter;

	sign = 1;
	letter = 0;
	if (str[letter] == '-')
	{
		sign = -1;
		letter++;
	}
	if ((str[letter] == '+' || str[letter] == '-') && letter)
		sign = 0;
	return (sign);
}

int			ft_atoi(const char *str)
{
	int			letter;
	int			sign;
	long int	number;

	letter = 0;
	number = 0;
	while (ft_isblank(str[letter]))
		letter++;
	sign = ft_test_sign(&str[letter]);
	if (!sign)
		return (0);
	letter = letter + ft_test_letter(&str[letter]);
	while (str[letter] && ft_isdigit(str[letter]))
	{
		if (ft_check_to_long_input(number, str[letter], sign) != 1)
			return (ft_check_to_long_input(number, str[letter], sign));
		number = number * 10 + str[letter] - 48;
		letter++;
	}
	return (number * sign);
}
