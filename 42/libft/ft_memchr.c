/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:17:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 14:58:20 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	converter;

	converter = '\0';
	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (converter + c))
		{
			ret = &((unsigned char*)s)[i];
			return (ret);
		}
		i++;
	}
	return (NULL);
}
