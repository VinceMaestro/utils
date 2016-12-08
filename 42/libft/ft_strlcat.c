/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 17:39:31 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/08 17:39:36 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
  int  i1;
  int  i2;

  i1 = 0;
  i2 = 0;
  while (dst[i1] != 0)
  {
    i1++;
  }
  while (i2 < (int)size)
  {
    dst[i1] = src[i2];
    i1 ++;
    i2 ++;
  }
  dst[i1] = 0;
  return (i1 + i2);
}
