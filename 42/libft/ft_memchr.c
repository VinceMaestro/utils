/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:17:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/27 23:03:41 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	size_t	i;
	char	*conv_s;

	i = 0;
	conv_s = (char*)s;
	while (i < n)
	{
		if ((conv_s[i]) == (char)c)
			return (&conv_s[i]);
		i++;
	}
	return (NULL);
}
