/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:55:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/07 16:55:35 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void ft_putstr(void *str)
{
	char *buff;
	buff = &str;
	int	i;
	i = 0;
	while (buff)
	{
		ft_putchar(buff);
		buff += 1;
	}
}

int main()
{
	ft_putstr("hello");
}