/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 17:44:30 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/19 20:10:44 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;
	void	*buff;

	new_node = (void*)malloc(sizeof(t_list));
	if (content)
	{
		new_node->content = (void*)malloc(content_size);
		new_node->content = *content;
		new_node->content_size = content_size;
	}
	else
	{
		new_node->content = NULL;
		new_node->content_size = 0;
	}
	new_node->next = NULL;
	return (new_node);
}
