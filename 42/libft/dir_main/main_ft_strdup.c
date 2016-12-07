/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 01:59:21 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 02:05:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char const	src[] = "Hello world!";
	//char const	src2[] = "Hells world!";
	//if (ft_strcmp((ft_strdup(src)),(char*)src2) == 0)
	if (ft_strcmp((ft_strdup(src)),(char*)src) == 0)
	{
		printf("Perfect copy\n");
	}
	else
	{
		printf("copy altered\n");
	}
	return (0);
}
