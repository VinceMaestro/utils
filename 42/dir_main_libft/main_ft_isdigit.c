/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 20:33:59 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/11 20:40:21 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	var;

	var = 48;
	if (ft_isdigit(var) != 0)
		printf("%i is digit", var);
	else
		printf("%i is not digit", var);
	return (0);
}
