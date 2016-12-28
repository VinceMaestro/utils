/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 11:35:26 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/28 11:43:40 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
	int i;

	i = -1;
	while (i < 530)
	{
		if (ft_isdigit(i) != isdigit(i))
			printf("%c does not work ", i);
		i++;
	}
	return (0);
}
