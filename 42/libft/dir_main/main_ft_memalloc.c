/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:14:16 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/14 11:43:21 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	size_t size;
	void *ptr;

	ptr = "Hello World";
	printf("ptr was : %s\n", ptr);
	size = 3;
	ptr = ft_memalloc(size);
	if (ptr != NULL)
		printf("Memory allocated Successfully \n");
	else
		printf("Memory allocated Failed \n");
	printf("ptr is now: %s\n", ptr);
	return (0);
}
