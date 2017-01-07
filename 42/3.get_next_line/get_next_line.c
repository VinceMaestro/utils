/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 07:16:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/07 14:51:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int	get_next_line(const int fd, char **line)
// {
// 	char			*endl;
// 	char			*text;
// 	static t_list	*reader;
//
// 	endl = NULL;
// 	((!reader) ? (reader = (t_list*)ft_memalloc(t_list)));
// 	((reader) ? (*reader = (t_list){(char*)ft_memalloc(BUFF_SIZE)), BUFF_SIZE, NULL});
// 	if (!fd || !line || !BUFF_SIZE || !reader || !reader->content)
// 		return (-1);
// 	while (!(reader->content_size = ft_max((size_t)(ft_memchr(buff, '\n', BUFF_SIZE) - reader->content), 0)))
// 	{
// 		read(fd, buff, BUFF_SIZE));
// 		reader->content = ft_strjoin(reader->content, (buff, )[0]  ft_memchr(buff, '\n', BUFF_SIZE)))
// 	}
// }

static void	*ft_memincr(void *src, size_t new_size)
{
	void	*buff;

	buff = (void*)malloc(sizeof(void) * new_size);
	if (!buff)
		return (NULL);
	ft_bzero(buff, new_size);
	ft_memcpy(buff, src, new_size);
	ft_memdel(&src);
	return (buff);
}

static void	*ft_lstfd(gnl_list *lst_fd, int fd)
{
	while (lst_fd->next && lst_fd->fd != fd)
		lst_fd = lst_fd->next;
	if (lst_fd->fd == fd)
		return (lst_fd);
	return (NULL);
}


int			get_next_line(const int fd, char **line)
{
	char				*buff;
	char				*end;
	size_t				*reader;
	char				*first_letter;
	static gnl_list		**fd_lst;

	if (!fd || !line || BUFF_SIZE < 1)
		return (-1);
	reader = 1;
	end = NULL;
	buff = ft_memincr(ft_lstfd(*fd_lst, fd)->content,\
		(ft_lstfd(*fd_lst, fd)->content_size) + BUFF_SIZE);
	first_letter = buff;
	while ((reader = read(fd, buff, BUFF_SIZE)) && \
		!(end = ft_memchr(buff, '\n', ft_strlen(buff))) && buff)
		buff = ft_memincr(buff, ft_strlen(buff) + BUFF_SIZE);
	(end ? buff = ft_memincr(buff, ft_strlen(buff) + (end - buff)) : ft_lstfd(*fd_lst, fd)->content)
	*line = buff;
	return (1);
}

//sanitizer adress
