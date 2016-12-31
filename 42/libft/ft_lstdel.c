/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 15:16:40 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 03:59:36 by Mads             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*buff;

	while (*alst)
	{
		buff = (*alst)->next;
		ft_lstdelone(&(*alst), del);
		*alst = buff;
	}
}

// void	ft_delete(void *content, size_t size)
// {
// 	if (content)
// 		free(content);
// 	content = NULL;
// 	size = 0;
// }
//
// int	main(void)
// {
// 	t_list *l = ft_lstnew(strdup("nyancat"), 8);
//
// 	l->next = ft_lstnew(strdup("#TEST#"), 7);
// 	ft_lstdel(&l, *ft_delete);
// 	write(2, "", 1);
// 	if (!l)
// 		printf("SUCCESS");
// 	printf("FAIL : ");
// }
