/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:37:04 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/14 18:42:34 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = len - 1;
	if (dst > src)
	{
		while (i >= 0)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10] = "ezzine";
    char *first, *second;
    first = str;
    second = str;
	char str2[10] = "ezzine";
    char *src, *dst;
    src = str2;
    dst = str2;
    printf("Original string :%s\n ", str);
    // when overlap it start from first position
    ft_memmove(dst + 2, src, 4);
    printf("memmove overlap : %s\n ", dst);
	for(int i=0;i<strlen(str);i++)
	{
		printf("\n%c's address : %p",str[i],&str[i]);
	}
}
*/