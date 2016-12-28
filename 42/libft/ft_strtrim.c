/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 17:58:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 10:55:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*fresh;

	start = 0;
	end = ft_strlen(s) - 1;
	if (s == NULL)
		return (NULL);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (end == 0 || start == end + 1)
	{
		fresh = (char *)malloc(1);
		*fresh = '\0';
		return (fresh);
	}
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	fresh = (char *)malloc(sizeof(char) * (end - start + 2));
	if (fresh != NULL)
	{
		ft_strncpy(fresh, &s[start], end - start + 1);
		fresh[end - start + 1] = '\0';
	}
	return (fresh);
}
