/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:54:16 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 11:45:54 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_big;
	size_t	len_little;

	i = 0;
	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	if (!*little)
		return ((char*)big);
	if (len_big >= len_little)
	{
		while (i <= len_big - len_little && i <= len - len_little)
		{
			if (!ft_memcmp(&big[i], little, len_little))
				return ((char*)&big[i]);
			i++;
		}
	}
	return (NULL);
}
