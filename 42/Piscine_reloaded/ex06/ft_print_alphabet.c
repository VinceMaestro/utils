/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:09:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/07 16:09:39 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet()
{
	char	currentLetter;
	currentLetter = 97;
	while (currentLetter != 122)
	{
		ft_putchar(currentLetter);
		currentLetter += 1;
	}
	ft_putchar('\n');
}