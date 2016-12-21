/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:31:41 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/21 23:43:26 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		stop;
	char	*new;

	start = 0;
	stop = ft_strlen(s);
	while ((s[start] == " " || s[start] == "\n" || s[start] == "\t") \
	&& s[start] != '\0')
		start++;
	while ((s[stop] == " " || s[stop] == "\n" || s[stop] == "\t") && stop > 0)
		stop--;
	if (start >= stop)
	{
		new = (char*)malloc(sizeof(new));
	}
	else
	{
		new = (char*)malloc(sizeof(new) * (stop - start + 1));
		if (new)
			ft_strcpy(new, s[start]);
		else
			return (new);
	}
	new[stop] = '\0';
	return (new);
}
