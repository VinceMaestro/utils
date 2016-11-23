/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:09:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 05:59:44 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	current_letter;

	current_letter = 97;
	while (current_letter < 123)
	{
		ft_putchar(current_letter);
		current_letter += 1;
	}
}
