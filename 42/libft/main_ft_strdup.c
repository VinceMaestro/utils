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
	if (ft_strcmp(ft_strdup(src), src) == 0)
	{
		printf("Perfect copy");
	}
	else
	{
		printf("copy altered");
	}
	return (0);
}
