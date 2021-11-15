/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:24:13 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/14 16:20:33 by zezzine          ###   ########.fr       */
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

void	printlist(t_list *node)
{
	while (node != NULL)
	{
		printf(" %s ", node->content);
		node = node->next;
	}
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("first");
	head->next = ft_lstnew("socend");
	head->next->next = ft_lstnew("third");
	ft_lstadd_back(&head, ft_lstnew("fourth"));
	printlist(head);
}
*/