/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:37:32 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/19 18:42:24 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	str[] = "Hello World!";
	int		str_len;
	char	*str2;

	str_len = ft_strlen(str);
	str2 = ft_lstnew(str, str_len);
	while (str2->next)
	{
		ft_putstr(str2->next);
		str2->next;
	}
	return (0);
}
