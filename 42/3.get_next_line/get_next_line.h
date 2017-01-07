/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 07:16:16 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/07 14:16:10 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"

typedef struct get_next_line_list	gnl_list

struct	get_next_line_list
{
	void		*content;
	size_t		content_size;
	int			fd;
	gnl_list	next_fd;

};

# ifndef BUFF_SIZE
#  define BUFF_SIZE 32
# endif

int		get_next_line(const int fd, char **line);

#endif