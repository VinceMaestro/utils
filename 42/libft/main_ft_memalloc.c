/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:14:16 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 17:24:52 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	size_t size;
	char *ptr;

	size = 5;
	ptr = ft_memalloc(size);
	//ptr = "Hello";
	printf("%s\n", ptr);
	return (0);
}
