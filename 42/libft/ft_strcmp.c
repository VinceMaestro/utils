/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:04:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 15:37:39 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		count;

	count = 0;
	while ((s1[count] == s2[count]) && (s1[count] != '\0'))
	{
		count += 1;
	}
	if (s1[count] > s2[count])
	{
		return (1);
	}
	else if (s1[count] < s2[count])
	{
		return (-1);
	}
	return (0);
}
