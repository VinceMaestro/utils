/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 01:34:17 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/24 01:46:17 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main ()
{
	char str[] = "Hello World!\n"
	int len;

	//ft_strcpy(str, "This is tutorialspoint.com");

	len = ft_strlen(str);
	printf("Length |%s| is |%d|\n", str, len);

	return(0);
}
