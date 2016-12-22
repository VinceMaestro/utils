/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 22:09:02 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 17:19:29 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*conv_c;

	i = 0;
	conv_c = (unsigned char*)c;
	while (i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		if ((char*)dst)[i] == conv_c
			return (&(dst[i + 1]));
		i += 1;
	}
	return (dst);
}
