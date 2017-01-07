/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 07:16:16 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/05 17:43:27 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"

typedef struct get_next_line_list	gnl_list

struct	get_next_line_list
{
	void		**first;
	void		*content;
	size_t		content_size;
	int			fd;
	gnl_list	next;

};

# ifndef BUFF_SIZE
#  define BUFF_SIZE 32
# endif

int		get_next_line(const int fd, char **line);

#endif
