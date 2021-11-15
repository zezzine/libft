/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:07 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/15 21:36:03 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_elemet;

	head = NULL;
	new_elemet = NULL;
	if (!lst || !f || !del)
	{
		return (NULL);
	}
	while (lst !NULL)
	{
		new_elemet = ft_lstnew(lst->content);
		if (!new_elemet)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (head == NULL)
			head = new_elemet;
		ft_lstadd_back(&head, new_elemet);
		lst = lst -> next;
	}
	return (head);
}
