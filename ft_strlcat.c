/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:50:58 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/13 15:29:23 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char*src, size_t dstsize)
{
	size_t	i;
	size_t	dstl;
	size_t	srcl;
	size_t	j;

	if (!dst)
		return (ft_strlen(src));
	i = 0;
	dstl = ft_strlen((char *)dst);
	j = dstl;
	srcl = ft_strlen((char *)src);
	if (dstsize > dstl)
	{
		while (src[i] && (j < (dstsize - 1)))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
		return (dstl + srcl);
	}
	return (dstsize + srcl);
}
/*
int main()
{
	printf("%lu\n", ft_strlcat(0, 0, 0));
	//printf("%lu\n", strlcat(0, 0, 0));
}*/