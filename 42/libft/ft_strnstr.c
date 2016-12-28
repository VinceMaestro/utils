/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:54:16 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 11:51:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	buff;

	i = 0;
	buff = 0;
	if (big && little && len)
	{
		while (i < len && big[i] != '\0')
		{
			if (little[buff] != '\0')
				return (ft_strnstr(&big[i + 1], little, len - i));
			else if (little[i] == '\0')
				return (char*)(&(big[0]));
			else
				i++;
		}
	}
	return (NULL);
}
