/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 16:35:09 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/20 18:13:51 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	new;
	t_list	tmp;

	tmp = f(*lst);
	new = ft_lstnew(tmp->content, tmp->content_size);
	if (tmp->next)
	{
		ft_lstmap(lst->next, &f);
		new->next = lst->next;
	}
	return (lst);
}
