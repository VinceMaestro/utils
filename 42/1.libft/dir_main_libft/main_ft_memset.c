/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:46:23 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/12 15:50:50 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str1[] = "Hello World!";
	int	c = 87;
	size_t len = 8;

	printf("%s is the new string", ft_memset(str1, c, len));
	return (0);
}
