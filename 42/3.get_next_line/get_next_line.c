/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 07:16:02 by vpetit            #+#    #+#             */
/*   Updated: 2017/01/05 17:29:02 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	char			*endl;
	char			*text;
	static t_list	*reader;

	endl = NULL;
	((!reader) ? (reader = (t_list*)ft_memalloc(t_list)));
	((reader) ? (*reader = (t_list){(char*)ft_memalloc(BUFF_SIZE)), BUFF_SIZE, NULL});
	if (!fd || !line || !BUFF_SIZE || !reader || !reader->content)
		return (-1);
	while (!(reader->content_size = ft_max((size_t)(ft_memchr(buff, '\n', BUFF_SIZE) - reader->content), 0)))
	{
		read(fd, buff, BUFF_SIZE));
		reader->content = ft_strjoin(reader->content, (buff, )[0]  ft_memchr(buff, '\n', BUFF_SIZE)))
	}
}

int	get_next_line(const int fd, char **line)
{
	char	*buff;
	char	*end;
	size_t	*reader;

	if (!fd || !line || BUFF_SIZE < 1)
		return (-1);
	reader = 1;
	buff = ft_memalloc(BUFF_SIZE);
	while (reader = read(fd, buff, BUFF_SIZE) && !(end = ft_memchr(buff, '\n', BUFF_SIZE)))
	{
		ft_putstr(buff);
		reader = read(fd, buff, BUFF_SIZE);
	}
	fd = (fd + BUFF_SIZE - (buff + end));



	return (0);
}

//sanitizer adress
