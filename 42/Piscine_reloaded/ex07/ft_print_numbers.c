/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:36:53 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 03:31:51 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	current_number;

	current_number = 48;
	while (current_number != 58)
	{
		ft_putchar(current_number);
		current_number += 1;
	}
}
