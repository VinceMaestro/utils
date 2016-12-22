/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:20:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 16:26:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	size_t			i;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	i = 0;
	conv_s1 = (unsigned char*)s1;
	conv_s2 = (unsigned char*)s2;
	while (i < n && conv_s1[i] < conv_s2[i])
		i++;
	return (conv_s1[i] - conv_s2[i]);
}
