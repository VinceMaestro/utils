/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 22:09:02 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 23:09:20 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int		i;
	
	i = 0;
	while (i < (int)n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		if (((char*)dst)[i] == ((unsigned char)c))
		{
			return (dst);
		}
		i += 1;
	}
	return (dst);
}
