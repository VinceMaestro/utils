/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 16:15:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 17:51:15 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void*)malloc(sizeof(*ptr) * (size + 1));
	if (ptr != 0)
	{
		((char*)ptr)[size + 2] = 0;
		return (ptr);
	}
	return (NULL);
}
