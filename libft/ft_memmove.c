/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:37:04 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/12 19:07:39 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	lens;
	int	lend;
	int	i;

	i = len - 1;
	lens = ft_strlen((char *)src) - 1;
	lend = ft_strlen((char *)dst) - 1;
	if (lens > lend)
	{
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	else if (lens < lend)
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int main()
{
	char str[] = "Aezzine";
	char *dst;
	char *src;
	dst = str;
	src = str + 2;
	printf("%s\n", ft_memmove(((void *)0), ((void *)0), 0));
}*/