/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 12:15:45 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 13:32:44 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	var;

	var = 115;
	if (ft_isalnum(var) != 0)
		printf("%i is alphanum\n", ft_isalnum(var));
	else
		printf("%i is not alphanum\n", ft_isalnum(var));
	return (0);
}
