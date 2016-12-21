/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 19:26:37 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/11 20:06:30 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	int val;
	char	str[] = "98a993489";
	char	str2[] = "Hello World!";

	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);

	val = ft_atoi(str2);
	printf("String value = %s, Int value = %d\n", str2, val);
	return (0);
}
