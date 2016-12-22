/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:32:06 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 13:13:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(int len)
{
	int	i;

	i = 0;
	while (len % 10 != len)
	{
		len = len / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		n_cp;
	char	**buff;

	i = 0;
	n_cp = n;
	len = ft_len(n_cp);
	buff = (char**)malloc(sizeof(buff) * (len + 1));
	while (i < len)
	{
		buff[len - i] = '0' + (n_cp % 10);
		i++;
		n_cp = n_cp / 10;
	}
	return (buff);
}
