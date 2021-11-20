/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:24:13 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/16 13:37:09 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*s;

	if (*lst)
	{
		s = *lst;
		while (s->next)
			s = s->next;
		s->next = new;
	}
	else
		*lst = new;
}
/*
#include <stdio.h>

void	printlist(t_list *lst)
{
	while (lst != NULL)
	{
		printf(" %s ", lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("first");
	head->next = ft_lstnew("second");
	head->next->next = ft_lstnew("third");
	ft_lstadd_back(&head, ft_lstnew("fourth"));
	ft_lstadd_back(&head, ft_lstnew("five"));
	printlist(head);
}
*/