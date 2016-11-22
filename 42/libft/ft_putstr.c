/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:55:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/15 18:42:39 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(void *str)
{
	char	*buff;
	int		i;

	buff = str;
	i = 0;
	while (buff[i])
	{
		ft_putchar(buff[i]);
		i += 1;
	}
}

int		main(void)
{
	ft_putstr("hello");
}
