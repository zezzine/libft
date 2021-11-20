/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:23:43 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/13 18:18:49 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_lstsize(t_list *lst)
{
	int				count;
	t_list			*current;

	count = 0;
	current = lst;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list *head;

	head = ft_lstnew("first");
	head->next = ft_lstnew("socend");
	head->next->next = ft_lstnew("third");

	ft_lstadd_front(&head, ft_lstnew("fourth"));
	printf("%d", ft_lstsize(head));
}*/