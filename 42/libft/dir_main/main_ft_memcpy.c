/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:15:35 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 00:15:48 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char const	*src;
	char	des[12];

	src = "Hello World";
	printf(" %s \n", (((char*)(ft_memcpy(des, src, 8)))[0]));
	return (0);
}
