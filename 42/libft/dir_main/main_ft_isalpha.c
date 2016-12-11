/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 20:16:27 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/11 20:27:30 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	var = 'z';

	if (ft_isalpha(var))
	{
		printf("var : %c is an alphabet\n", var);
	}
	else
	{
		printf("var : %c is not an alphabet\n", var);
	}
	return (0);
}
