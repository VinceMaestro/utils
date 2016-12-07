/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:07:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 01:55:38 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void		*ft_memcpy(void *dst, void const *src, size_t n);
void		*ft_memccpy(void *dst, void const *src, int c, size_t len);
void		*ft_memmove(void *dst, void const *src, size_t len);
void		*ft_memchr(void const *s, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
int		*ft_range(int min, int max);
int		ft_strcmp(char *s1, char *s2);
char		*ft_strdup(char const *s1);
char		*ft_strcpy(char *dst, char const *src);
char		*ft_strncpy(char *dst, char const *src, size_t len);
size_t	ft_strlen(const char *str);
void	ft_putstr(void *str);


#endif
