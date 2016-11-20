/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:33:49 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/19 12:09:11 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_ft_display_file.h"

int		ft_display_file(char *argv)
{
	int		open_fd;
	int		text_len;

	open_fd = open(argv, O_RDWR);
	if (open_fd == -1)
	{
		ft_print_error("open file () failed \n");
		return (-1);
	}
	text_len = lseek(open_fd, +0, SEEK_END);
	lseek(open_fd, -text_len, SEEK_END);
	return (ft_aff_content(open_fd, text_len));
}
