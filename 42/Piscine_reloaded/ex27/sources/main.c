/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:31:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 19:38:54 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_ft_display_file.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_print_error("File name missing.\n");
		return (-1);
	}
	else if (argc == 2)
	{
		return (ft_display_file(argv[1]));
	}
	ft_print_error("Too many arguments.\n");
	return (-1);
}
