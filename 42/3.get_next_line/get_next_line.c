/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 07:16:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/10 23:55:47 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
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

static void	*ft_memincr(void *src, int new_size)
{
	void	*buff;

	buff = (void*)malloc(sizeof(void) * (new_size + 1));
	if (buff)
	{
		printf("Malloc SUCCESS\n");
		ft_bzero(buff, new_size + 1);
		printf("Bzero SUCCESS\n");
		if (src)
		{
			ft_memcpy(buff, src, new_size);
			printf("memcpy SUCCESS\n");
			ft_memdel(&src);
			printf("memdel SUCCESS\n");
		}
	}
	return (buff);
}

static void	*ft_lstfd(t_gnl_list *fd_lst, int fd)
{
	t_gnl_list	new;
	t_gnl_list	*ptr;

	((fd_lst) ? (ptr = fd_lst) :\
		(ptr = NULL));
	if (fd_lst)
	{
		printf("ptr define next s Trying to print\n");
		// printf("ptr define next s : %p\n", ptr->next_fd);
		while (ptr->next_fd && ptr->fd != fd)
			ptr = ptr->next_fd;
		printf("exiting while\n");
		if (ptr->fd == fd)
			return (ptr);
	}
	printf("malloc new\n");
	// new = (t_gnl_list)malloc(sizeof(t_gnl_list));
	// if (new)
	// {
		printf("success malloc\n");
		new.fd = fd;
		new.content = NULL;
		new.content_size = 0;
		new.next_fd = NULL;
		((ptr) ? (ptr->next_fd = &new) :\
			(ptr = &new));
		printf("exit ft_lstfd\n");
	// }
	return ((ptr->next_fd) ? (ptr = ptr->next_fd) : (ptr));
}

static void	ft_init_gnl(t_gnl_list *fd_lst, int fd, t_gnl *s)
{
	printf("1\n");
	s->reader = BUFF_SIZE;
	printf("2\n");
	s->ptr_lst = ft_lstfd(fd_lst, fd);
	printf("3\n");
	s->str = s->ptr_lst->content;
	printf("4\n");
	s->len_str = &(s->ptr_lst->content_size);
	printf("5\n");
	s->end = ft_memchr(s->str, '\n', *(s->len_str));
	printf("6\n");
}

int			get_next_line(const int fd, char **line)
{
	static t_gnl_list	**fd_lst;
	t_gnl				s;

	if (!fd || !line || BUFF_SIZE < 1)
		return (-1);
	if (!fd_lst)
		fd_lst = (t_gnl_list**)malloc(sizeof(t_gnl_list*));
	printf("INIT : START\n");
	((fd_lst) ? (ft_init_gnl(*fd_lst, fd, &s)) : fd_lst);
	printf("INIT : SUCCESS\n");
	if (fd_lst && s.ptr_lst)
	{
		while (s.reader == BUFF_SIZE && !s.end)
		{
			printf("ENTERING LOOP\n");
			*(s.len_str) += BUFF_SIZE;
			printf("len_str : %i\n", *(s.len_str));
			s.str = ft_memincr(s.str, *(s.len_str));
			printf("str : %s\n", s.str);
			if (!s.str)
				return (-1);
			s.reader = read(fd, &s.str[*(s.len_str) - BUFF_SIZE], BUFF_SIZE);
			printf("reader : %i\n", s.reader);
			s.end = ft_memchr(s.str, '\n', *(s.len_str));
			printf("end : %s\n", s.end);
			printf("EXITING LOOP\n");
		}
		printf("NEXT\n");
		if (s.end)
		{
			printf("FOUND ret chariot\n");
			*line = ft_memalloc(s.end - s.str);
			if (!*line)
				return (-1);
			*line = ft_memccpy(*line, s.str, '\n', s.end - s.str - 1);
			s.str = ft_memincr(s.end + 1, *(s.len_str) + (s.end - s.str));
		}
		else
			s.str = ft_memincr(s.str, *(s.len_str) + s.reader);
		if (!s.str)
			return (-1);
	}
	else
		return (-1);
	printf("Assigning line\n");
	*line = s.str;
	return ((s.reader <  BUFF_SIZE) ? (0) : (1));
}

//sanitizer adress
