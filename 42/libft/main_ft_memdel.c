/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:00:54 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/14 13:20:59 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	void	**ptr;
	void	buff;

	ptr[0] = (char*)malloc(sizeof(**ptr) * 5);
	ptr[1] = (char*)malloc(sizeof(**ptr) * 5);
	ptr[0] = "Hi";
	ptr[1] = "Hello";
	printf("Here was ptr %s\n", ((char**)ptr)[0]);
	buff = ft_memdel(ptr);
	printf("Here is ptr now %p\n", buff);
	return (0);
}
