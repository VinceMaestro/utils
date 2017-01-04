/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:00:54 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/19 09:41:06 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;
	int	i;

	i = 0;

	ptr = (char*)malloc(sizeof(*ptr) * 10000001);
	while (i < 10000000)
	{
		ptr[i] = 120;
		i++;
	}
	printf("Done allocating !\n");
	//free((void*)ptr);

	ft_strdel(&ptr);
	printf("Done freeing !\n");

	while (1)
		;
	return (0);
}
