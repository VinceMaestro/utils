/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 07:16:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/09 22:27:00 by vpetit           ###   ########.fr       */
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

	buff = (void*)malloc(sizeof(void) * (new_size + 1));
	if (buff)
	{
		ft_bzero(buff, new_size + 1);
		if (*src)
			ft_memcpy(buff, src, new_size);
		ft_memdel(&src);
	}
	return (buff);
}

static void	*ft_lstfd(t_gnl_list *lst_fd, int fd)
{
	t_gnl_list	*new;

	if (lst_fd)
	{
		while (lst_fd->next && lst_fd->fd != fd)
			lst_fd = lst_fd->next;
		if (lst_fd->fd == fd)
			return (lst_fd);
	}
	new = (t_gnl_list*)malloc(sizeof(t_gnl_list));
	if (new)
	{
		((lst_fd) ? (lst_fd->next = new));
		new->fd = fd;
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
	}
	return (new);
}

static void	ft_init_gnl(t_gnl_list *fd_lst, int fd, t_gnl *s)
{
	s->reader = BUFF_SIZE;
	s->ptr_lst = ft_lstfd(*fd_lst, fd);
	s->str = ptr_lst->content;
	s->len_str = &(ptr_lst->content_size);
	s->end = ft_memchr(s->str, '\n', *(s->len_str));
}

int			get_next_line(const int fd, char **line)
{
	static t_gnl_list	**fd_lst;
	t_gnl				s;

	if (!fd || !line || BUFF_SIZE < 1)
		return (-1);
	if (!fd_lst)
		fd_lst = (t_gnl_list**)malloc(sizeof(t_gnl_list*));
	ft_init_gnl(*fd_lst, fd, &s);
	while (s.reader == BUFF_SIZE && !s.end)
	{
		s.str = ft_memincr(s.str, *(s.len_str) += BUFF_SIZE);
		if (!s.str)
			return (-1);
		s.reader = read(fd, &s.str[*(s.len_str) - BUFF_SIZE], BUFF_SIZE);
		s.end = ft_memchr(s.str, '\n', *(s.len_str));
	}
	((s.end) ? (s.str = ft_memincr(s.str, *(s.len_str) + (s.end - s.str)))
		: (s.str = ft_memincr(s.str, *(s.len_str) + reader)));
	//ft_strlcat(s.str, s.str + s.end, s.end - s.str);

	*line = s.str;
	return (1);
}

//sanitizer adress
