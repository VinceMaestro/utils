/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 22:53:46 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 00:13:30 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dst, void const *src, size_t len);

int		main (void)
{
	char dest[] = "oldstring";
	const char src[]  = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return (0);
}
