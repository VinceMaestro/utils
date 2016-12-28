/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 19:24:58 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 11:06:09 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int		i;
	char	*buff;

	i = 0;
	if (*s)
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
				buff = (char*)&s[i];
			i++;
		}
		if (s[i] == c)
			buff = (char*)&s[i];
	}
	else
		buff = NULL;
	return (buff);
}
