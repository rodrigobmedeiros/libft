/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robernar <robernar@student.42.rj>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:19:46 by robernar          #+#    #+#             */
/*   Updated: 2024/02/24 18:47:50 by robernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *copy;
	t_list *first_node;

	if ((!lst) || (!f) || (!del))
		return (NULL);
	while (lst)
	{
		new = ft_lstnew(*((*f)(lst->content)));
		if (!new)
		{
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		if (!copy)
		{
			copy = new;
			first_node = new;
		}
		else
			copy->next = new;
		lst = lst->next;
		copy = copy->next;
	}
	return (first_node);
}

