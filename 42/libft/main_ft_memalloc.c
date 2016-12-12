/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:14:16 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 17:50:33 by vpetit           ###   ########.fr       */
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
	printf("ptr is now: %s\n", ptr);
	printf("Memory allocated : %s\n", ft_memalloc(size));
	return (0);
}
