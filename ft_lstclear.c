/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:42:10 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/15 20:24:29 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (lst != NULL)
	{
		tmp = *lst;
		while (tmp != NULL)
		{			
			if (tmp->content != NULL)
				del(tmp->content);
			free(tmp);
			tmp = tmp->next;
		}
		*lst = NULL;
	}
}
