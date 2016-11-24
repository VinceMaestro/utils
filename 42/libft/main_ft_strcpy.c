/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 02:18:03 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 02:18:16 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main()
{
	char src[40];
	char dest[100];

	//memset(dest, '\0', sizeof(dest));
	strcpy(src, "Hello world!");
	strcpy(dest, src);

	printf("Final copied string : %s\n", dest);

	return(0);
}
