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

	buff = (void*)malloc(sizeof(void) * new_size);
	if (!buff)
		return (NULL);
	ft_bzero(buff, new_size);
	if (*src)
		ft_memcpy(buff, src, new_size);
	ft_memdel(&src);
	return (buff);
}

static void	*ft_lstfd(gnl_list *lst_fd, int fd)
{
	gnl_list	*new;

	if (lst_fd)
	{
		while (lst_fd->next && lst_fd->fd != fd)
			lst_fd = lst_fd->next;
		if (lst_fd->fd == fd)
			return (lst_fd);
	}
	new = (gnl_list*)malloc(sizeof(gnl_list));
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

int			get_next_line(const int fd, char **line)
{
	char				*str;
	char				*end;
	size_t				*reader;
	static gnl_list		**fd_lst;
	gnl_list			*ptr_lst;
	int					*len_str;

	fd_lst = (gnl_list**)malloc(sizeof(gnl_list*));
	if (!fd || !line || BUFF_SIZE < 1)
		return (-1);
	reader = 1;
	end = NULL;
	ptr_lst = ft_lstfd(*fd_lst, fd);
	str = ptr_lst->content;
	len_str = &(ptr_lst->content_size);
	end = ft_memchr(str, '\n', *len_str);
	while (reader && !end && str)
	{
		str = ft_memincr(str, *len_str += BUFF_SIZE);
		reader = read(fd, &str[*len_str - BUFF_SIZE], BUFF_SIZE);
		end = ft_memchr(str, '\n', *len_str);
	}
	if (end)
		str = ft_memincr(str, *len_str + (end - str));
	else
		str = ft_memincr(str, ft_strlen(str) + BUFF_SIZE);


	ft_memdel(&(ptr_lst->content));
	ft_strlcat(ptr_lst->content, str + end, end - str);
	*line = str;
	return (1);
}

//sanitizer adress
