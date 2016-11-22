/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:17:59 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/19 15:27:13 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*value_range;
	int		cpt;

	cpt = 0;
	if (min >= max)
	{
		value_range = NULL;
	}
	else
	{
		value_range = (int*)malloc(sizeof(*value_range) * (max - min + 1));
		while (cpt < max - min)
		{
			value_range[cpt] = min + cpt;
			cpt += 1;
		}
	value_range[cpt] = NULL;
	}
	return (value_range);
	//free(value_range);
}

int		main(void)
{
	int	*ptr;

	ptr = ft_range(30, 40);
	//free(ptr);
	free(ft_range(30, 40));
	return (ptr[9]);
}
