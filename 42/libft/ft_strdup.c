/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:31:04 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/16 19:01:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*src_copy;
	int		src_len;
	int		i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len += 1;
	}
	src_copy = (char*)malloc(sizeof(*src_copy) * (src_len + 1));
	if (src_copy != NULL)
	{
		while (i < src_len)
		{
			src_copy[i] = src[i];
			i += 1;
		}
		src_copy[i] = '\0';
	}
	return (src_copy);
}
