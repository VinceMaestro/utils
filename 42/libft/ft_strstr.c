/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:33:39 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 15:37:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;

	i = 0;
	while (big[i] == little[i])
		i++;
	if (little[i] != '\0' && big[i] != '\0')
		return (ft_strstr(&big[i + 1], little));
	else if (little[i] == '\0')
		return (char*)(&(big[0]));
	else
		return (NULL);
}
