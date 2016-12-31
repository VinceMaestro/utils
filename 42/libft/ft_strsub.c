/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:31:20 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 01:04:32 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	i = 0;
	new = NULL;
	if (*s)
	{
		new = ft_memalloc(len + 1);
		if (new)
			ft_memcpy(new, &s[start], len);
		else
			return (new);
		new[len] = '\0';
	}
	return (new);
}
