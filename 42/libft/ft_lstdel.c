/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <vpetit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 15:16:40 by vpetit            #+#    #+#             */
/*   Updated: 2016/12/31 11:11:29 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
