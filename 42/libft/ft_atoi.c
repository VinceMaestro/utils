/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 18:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/03 16:22:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (ft_isinvisible(str[letter]))
		letter++;
	sign = ft_test_sign(&str[letter]);
	if (!sign)
		return (0);
	letter = letter + ft_test_letter(&str[letter]);
	while (str[letter] && ft_isdigit(str[letter]))
	{
		number = number * 10 + str[letter] - 48;
		letter++;
	}
	return (number * sign);
}
