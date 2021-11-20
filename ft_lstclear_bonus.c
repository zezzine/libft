/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:42:10 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/16 14:23:54 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	temp2 = *lst;
	if (lst || del)
	{
		while (temp != NULL)
		{
			del(temp->content);
			temp = temp->next;
			free(temp2);
			temp2 = temp;
		}
	}
	*lst = NULL;
}
