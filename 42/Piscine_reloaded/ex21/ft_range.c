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

int		ft_putchar(char c);

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
			ft_putnbr(value_range[cpt]);
			cpt += 1;
		}
	}
	free(value_range);
	return (value_range);
}
