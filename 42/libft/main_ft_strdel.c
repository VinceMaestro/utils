/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 14:53:01 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/14 16:48:03 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*as[] = 
	int	i;

	i = 0;
	while (i < 5)
	{
		as[i] = (char*)malloc(sizeof(*as) * 5);
		i++;
	}
	ft_strdel(as);
	return (0);
}
