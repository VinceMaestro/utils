/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 23:35:22 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 00:18:14 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main ()
{
	const char str[] = "Hello world!";
	const char ch = '.';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));
	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}
