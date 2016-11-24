/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:33:39 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 01:23:22 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main (void)
{
	char str1[] = "AAcdef";
	char str2[] = "ABCDEF";
	int ret;

	//ft_memcpy(str1, "abcdef", 6);
	//ft_memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	if(ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else if(ret < 0) 
	{
		printf("str1 is less than str2\n");
	}
	else 
	{
		printf("str1 is equal to str2\n");
	}
	return(0);
}
