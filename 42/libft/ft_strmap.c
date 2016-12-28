/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:30:32 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 20:28:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*buff;

	buff = (char*)malloc(sizeof(*buff) * (ft_strlen(s) + 1));
	i = 0;
	if (buff)
	{
		while (s[i])
		{
			buff[i] = f(s[i]);
			i++;
		}
		buff[i] = '\0';
	}
	return (buff);
}
