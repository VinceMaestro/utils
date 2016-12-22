/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:04:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 17:11:17 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			count;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	count = 0;
	conv_s1 = (unsigned char*)s1;
	conv_s2 = (unsigned char*)s2;
	while (count < n && conv_s1[count] && conv_s1[count] == conv_s2[count])
		count += 1;
	return (conv_s1[count] - conv_s2[count]);
}
