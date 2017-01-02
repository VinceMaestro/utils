/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:54:16 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/02 21:44:02 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_big;
	size_t	len_little;

	i = 0;
	if (len)
	{
		len_big = ft_strlen(big);
		len_little = ft_strlen(little);
		if (!little)
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
	}
	return (NULL);
}
//
// int	main(void)
// {
// 	char	*str;
//
// 	str = (char*)malloc(sizeof(char) * 4);
//
// 	if (strnstr(str, "Hello", 3) != ft_strnstr(str, "Hello", 3))
// 		printf("Should BE :  %s  IS :  %s  \n", strnstr(str, "Hello", 3), ft_strnstr(str, "Hello", 3));
// 	else printf("GG \n");
// }
