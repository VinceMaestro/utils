/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mads <Mads@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 11:13:50 by Mads              #+#    #+#             */
/*   Updated: 2016/12/19 11:13:58 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putstr_fd(char const *s, int fd)
{
  int i;

  i = 0;
  while (s[i] != '\0')
  {
    write(fd, &s[i], 1);
    i++;
  }
}