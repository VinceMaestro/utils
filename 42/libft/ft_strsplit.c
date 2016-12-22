/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 20:31:51 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/22 10:39:27 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	size_t	buff_len;
	char	**tab;
	int		tab_i;

	tab = (char**)malloc(sizeof(tab) * (ft_strlen(s) + 1));
	tab_i = 0;
	i = 0;
	buff_len = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			buff_len++;
		else if (buff_len != 0)
		{
			ft_strncpy(&(tab[tab_i]), &(s[i - (int)buff_len]), buff_len);
			tab_i++;
			buff_len = 0;
		}
		i++;
	}
	tab[tab_i] = '\0';
	return (tab);
}
