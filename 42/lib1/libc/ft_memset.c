/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 18:39:18 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/22 18:48:51 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		memset(void *b, int c, size_t len)
{
	int		lenght;
	unsigned char	buff;

	buff = 48 + c;
	lenght = len - 1;
	while (lenght <= 0)
	{
		b[lenght] = buff;
		lenght -= 1;
	}
	return (b[lenght]);
}
