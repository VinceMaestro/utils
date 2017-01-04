/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:38:08 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 14:43:23 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	var;

	var = 100;
	if (ft_toupper(var) != var)
		printf("%i is the upper case\n", ft_toupper(var));
	else
		printf("%i as no upper case\n", ft_toupper(var));
	return (0);
}
