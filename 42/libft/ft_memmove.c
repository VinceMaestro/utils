/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 22:47:42 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 13:23:46 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t	i;

	i = len;
	if (&dst <= (void**)&src)
		ft_memcpy(dst, src, len);
	else
		while (i > 0)
		{
			ft_memcpy(&(dst[i - 1]), &(src[i - 1]), 1);
			i--;
		}
	return (dst);
}
