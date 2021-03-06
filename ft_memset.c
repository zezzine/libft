/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:03 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/14 13:47:14 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i++] = (unsigned char)c;
	}
	b = str;
	return (b);
}
/*
#include<string.h>
#include<stdio.h>
int main()
{
	int s[] = {1,2,3,4};
	int i = 0;
	ft_memset(s, 10, 4 * sizeof(int));
	while (i < 4)
	{
		printf("%d . ", s[i]);
		i++;
	}
}*/