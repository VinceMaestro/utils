/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 13:28:35 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/14 14:50:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(sizeof(*str) * size);
	while (i < (int)size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
