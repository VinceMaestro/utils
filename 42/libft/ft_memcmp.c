/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:20:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 00:33:25 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *s1, void const *s2, size_t n)
{
	int		i;

	i = 0;
	while ((i < (int)n) && (((char*)s1)[i] == ((char*)s2)[i]))
	{
		i++;
	}
	if (((char*)s1)[i] > ((char*)s2)[i])
	{
		return (1);
	}
	else if (((char*)s1)[i] < ((char*)s2)[i])
	{
		return (-1);
	}
	return (0);
}