/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:45 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/13 15:29:51 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s01;
	unsigned char	*s02;
	size_t			i;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	i = 0;
	while ((s01[i] || s02[i]) && i < n)
	{
		if (s01[i] != s02[i])
			return (s01[i] - s02[i]);
		i++;
	}
	return (0);
}
/*
int main(int argc, char const *argv[])
{
	printf("%d", strncmp("abc", "abz", 3));
	return 0;
}*/