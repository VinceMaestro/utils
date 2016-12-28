/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:33:39 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 11:25:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;
	size_t	j;
	char	*buff_adress;

	i = 0;
	j = 0;
	if (*big && *little)
	{
		while (i < ft_strlen(big))
		{
			if (big[i] == little[j])
			{
				if (!buff_adress)
					buff_adress = (char*)&big[i];
				j++;
			}
			else
				j = 0;
			i++;
		}
		if (!ft_strcmp(buff_adress, little))
			return (buff_adress);
	}
	return (NULL);
}
