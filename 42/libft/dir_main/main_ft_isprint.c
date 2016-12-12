/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 14:12:51 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 14:16:34 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	var;

	var = 112;
	if (ft_isprint(var) == 0)
		printf("%i is not printable\n", var);
	else
		printf("%i is printable\n", var);
	return (0);
}
