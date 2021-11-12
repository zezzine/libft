/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:51 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/11 21:45:45 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int		l;

	c = (char)c;
	l = ft_strlen((char *)s);
	while (l > 0)
	{
		if (s[l] == (char)c)
			return ((char *)s + l);
		l--;
	}
	if (s[l] == c)
		return ((char *)s);
	return (NULL);
}
