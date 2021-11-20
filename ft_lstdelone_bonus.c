/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:40:55 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/15 20:19:49 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del != NULL && lst != NULL)
	{
		del(lst->content);
		free(lst);
	}
	return ;
}
/*
void	ft_del(void *content)
{
	free(content);
}

#include<stdio.h>
int main()
{
	t_list          *elem = NULL;
	char			*str = strdup("lorem");
	char            *str2 = strdup("ipsum");
	char            *str3 = strdup("dolor");
	char            *str4 = strdup("sit");
	ft_lstadd_front(&elem, ft_lstnew(str));
	ft_lstadd_front(&elem, ft_lstnew(str2));
	ft_lstadd_front(&elem, ft_lstnew(str4));
	ft_lstadd_front(&elem, ft_lstnew(str3));
	t_list *tmp =elem;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
	ft_lstdelone(elem , &ft_del);
	tmp =elem;
	while (tmp != NULL)
	{
		printf("%s\n", tmp->content);
		tmp = tmp->next;
	}
}
*/