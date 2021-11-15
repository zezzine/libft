/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:30 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/13 15:29:13 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	char	*p;
	char	*s01;

	s01 = (char *)s1;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s01) + 1));
	if (!p)
	{
		return (NULL);
	}
	ft_strcpy(p, s01);
	return (p);
}
