/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:36:53 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/07 16:36:58 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers()
{
	char	currentNumber;
	currentNumber = 48;
	while (currentNumber != 58)
	{
		ft_putchar(currentNumber);
		currentNumber += 1;
	}
	ft_putchar('\n');
}