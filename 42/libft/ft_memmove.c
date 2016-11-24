/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 22:47:42 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 23:10:59 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	int		i;

	i = 0;
	while (i < (int)len)
	{
		if (((char*)dst)[i] != ((char*)src)[i])
		{
			((char*)dst)[i] = ((char*)src)[i];
		}
		i += 1;
	}
	return (dst);
}
