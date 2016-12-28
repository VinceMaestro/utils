/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:30:45 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 20:29:09 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buff;

	buff = (char*)malloc(sizeof(*buff) * (ft_strlen(s) + 1));
	i = 0;
	if (buff)
	{
		while (s[i])
		{
			buff[i] = f(i, s[i]);
			i++;
		}
		buff[i] = '\0';
	}
	return (buff);
}
