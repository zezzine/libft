/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:11:07 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/16 14:39:26 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (del)(void *))
{
	t_list	*head;
	t_list	*new_element;

	head = NULL;
	new_element = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst != NULL)
	{
		new_element = ft_lstnew(f(lst->content));
		if (!new_element)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		if (head == NULL)
			head = new_element;
		else
			ft_lstadd_back(&head, new_element);
		lst = lst->next;
	}
	return (head);
}
