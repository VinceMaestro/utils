/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstnew.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 18:37:32 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/19 19:52:06 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char const	str[] = "Hello World!";
	int			str_len;
	t_list		*str2;

	str_len = ft_strlen(str);
	str2 = ft_lstnew(str, str_len);
	while (str2)
	{
		ft_putstr(str2->content);
		str2 = str2->next;
	}
	return (0);
}
