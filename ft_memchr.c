/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:23:47 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/11 21:57:18 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*cs;
	size_t				i;

	cs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
		{
			return ((void *)cs + i);
		}
		i++;
	}
	return (NULL);
}
