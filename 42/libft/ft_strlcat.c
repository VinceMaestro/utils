/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:39:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 16:41:05 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > dst_len + 1)
	{
		ft_memcpy(&dst[dst_len], src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (((size < dst_len + 1) ? (src_len + size) : (dst_len + src_len)));
}
