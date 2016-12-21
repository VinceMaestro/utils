/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 00:17:38 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 00:17:52 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char const	*src;
	char	des[12];

	src = "hellH World";
	printf("String is : %s \n ",(char*)(ft_memccpy(des, src, 72, 8)));
	return (0);
}
