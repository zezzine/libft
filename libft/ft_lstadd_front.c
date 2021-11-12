/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:23:30 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/12 22:49:20 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *head;

	head = ft_lstnew("first");
	head->next = ft_lstnew("socend");
	head->next->next = ft_lstnew("third");

	ft_lstadd_front(&head, ft_lstnew("fourth"));
	while(head)
	{
		printf("%s ", head->content);
		head = head->next;
	}
}*/