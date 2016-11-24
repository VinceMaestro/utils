/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:17:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 23:59:20 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	int		i;
	char	*ret;

	i = 0;
	while (i < (int)n)
	{
		if (((char*)s)[i] == ((unsigned char)c))
		{
			ret = &((char*)s)[i];
			return (ret);
		}
		i++;
	}
	return (NULL);
}
