/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:33:39 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 04:19:29 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "FF";
	char *s2 = "see FF your FF return FF now FF";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);

	if (i1 == i2)
		printf("SUCCESS : YOURS :  %s  THE REAL ONE :  %s  \n", i2, i1);
	else
		printf("FAIL : YOURS :  %s  THE REAL ONE :  %s  \n", i2, i1);
	return (0);
}

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	len_big;
	size_t	len_little;

	i = 0;
	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	if (*big && *little)
	{
		while (i <= len_big - len_little)
		{
			if (!ft_strncmp(&big[i], little, len_little))
				return ((char*)&big[i]);
			i++;
		}
	}
	return (NULL);
}
