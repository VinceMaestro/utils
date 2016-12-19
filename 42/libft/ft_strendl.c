/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 09:44:10 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/19 09:50:14 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putendl(char const *s)
{
  int i;

  i = 0;
  while (s[i] != '\0')
  {
    write(1, &s[i], 1);
    i++;
  }
  write(1, "\n", 1);
}