/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:33:49 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/23 20:12:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_ft_display_file.h"

int		ft_display_file(char *argv)
{
	int		open_fd;
	char	buffer[1];
	int		end;

	end = 0;
	open_fd = open(argv, O_RDWR);
	if (open_fd == -1)
	{
		ft_print_error("open file () failed \n");
		return (-1);
	}
	while (end == 0)
	{
		if (read(open_fd, buffer, 1) != 0)
		{
			ft_putchar(buffer[0]);
		}
		else	
		{
			end = 1;
		}
	}
	if (close(open_fd) == -1)
	{
		ft_print_error("close file () failed \n");
		return (-1);
	}
	return (0);
}
