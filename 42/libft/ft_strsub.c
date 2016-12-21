/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:31:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/21 21:14:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char*)malloc(sizeof(*new) * (len + 1));
	if (new)
	{
		while (i < len)
		{
			new[i] = s[start + (unsigned int)i];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
