/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 18:54:16 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/21 19:12:43 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;

	i = 0;
	while (big[i] == little[i] && i < (int)len)
		i++;
	if (little[i] != '\0' && big[i] != '\0')
		return (ft_strnstr(&big[i + 1], little, len - i));
	else if (little[i] == '\0')
		return (char*)(&(big[0]));
	else
		return (NULL);
}
