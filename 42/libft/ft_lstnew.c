/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:44:30 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/19 18:38:01 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;

	if (content)
		newNode = (void*)malloc(sizeof(t_list));
	else
	{
		newNode.content = NULL;
		newNode.content_size = 0;
	}
	newNode.next = NULL;
	return (new_node);
}
