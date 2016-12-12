/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 02:05:39 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 15:37:29 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, char const *src, size_t n)
{
	int		i;

	i = 0;
	while (i < (int)n)
	{
		if (src[i] == '\0')
		{
			dst[i] = src[i];
			while (i < (int)n)
			{
				dst[i] = '\0';
				i++;
			}
			return (dst);
		}
		else
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
