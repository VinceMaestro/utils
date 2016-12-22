/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:20:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 14:47:06 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char*)s1)[i] < ((char*)s2)[i])
			return (-1);
		else if (((char*)s1)[i] > ((char*)s2)[i])
			return (1);
		else
			i++;
	}
	return (0);
}
