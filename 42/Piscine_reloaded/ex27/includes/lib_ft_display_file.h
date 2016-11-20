/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft_display_file.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 23:36:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/19 12:10:05 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_DISPLAY_FILE_H
# define LIB_FT_DISPLAY_FILE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_display_file(char *argv);
int		ft_print_error(char *error_msg);
int		ft_aff_content(int fd, int len);

#endif
