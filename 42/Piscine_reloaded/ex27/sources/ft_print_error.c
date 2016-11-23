/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:36:19 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/18 23:56:07 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_print_error(char *error_msg)
{
	int		index;

	index = 0;
	while (error_msg[index] != '\0')
	{
		write(2, &error_msg[index], 1);
		index += 1;
	}
	return (0);
}
