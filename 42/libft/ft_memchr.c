/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:17:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 14:51:35 by vpetit           ###   ########.fr       */
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
