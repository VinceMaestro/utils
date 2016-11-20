/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:58:00 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/07 18:58:03 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		int	count;

		count = nb - 1;
		while (count > 1)
		{
			nb *= count;
			count -= 1;
		}
		return (nb);
	}
	else
	{
		return (0);
	}
}