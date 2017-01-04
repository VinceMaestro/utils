/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:38:08 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 14:49:49 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	var;

	var = 90;
	if (ft_tolower(var) != var)
		printf("%i is the lower case\n", ft_tolower(var));
	else
		printf("%i as no lower case\n", ft_tolower(var));
	return (0);
}
