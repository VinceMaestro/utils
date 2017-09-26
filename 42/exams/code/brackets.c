/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 14:47:32 by igradea           #+#    #+#             */
/*   Updated: 2017/04/03 14:59:21 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checker(char c, char *str, int *i)
{
	while (str[*i] && str[*i] != ')' && str[*i] != '}' && str[*i] != ']')
	{
		if (str[*i] == '(')
		{
			(*i)++;
			if (!(checker(')', str, i)))
				return (0);
		}
		else if (str[*i] == '{')
		{
			(*i)++;
			if (!(checker('}', str, i)))
				return (0);
		}
		else if (str[*i] == '[')
		{
			(*i)++;
			if (!(checker(']', str, i)))
				return (0);
		}
		(*i)++;
	}
	if (str[*i] == c)
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	int	index;
	int	i;

	index = 0;
	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			if (!(checker('\0', av[i], &index)))
				write(1, "Error\n", 6);
			else
				write(1, "OK\n", 3);
			i++;
			index = 0;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
