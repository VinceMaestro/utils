/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 21:17:59 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/16 19:01:14 by vpetit           ###   ########.fr       */
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
		value_range = (int*)malloc(sizeof(*value_range) * (max - min));
		while (cpt < max - min)
		{
			value_range[cpt] = min + cpt;
			printf("%i\n", value_range[cpt]);
			cpt += 1;
		}
	}
	free(value_range);
	return (value_range);
}
