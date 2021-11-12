/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:33 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/11 22:01:25 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*p;
	int				i;
	int				j;

	s1 = (char *)s1;
	s2 = (char *)s2;
	i = 0;
	j = 0;
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!p || !s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		p[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		p[j++] = s2[i];
		i++;
	}
	p[j] = 0;
	return (p);
}
/*
int main(int argc, char const *argv[])
{
	char ss[] = "42";
	char *s;
	s = ft_strjoin("", "42");
	printf("%s", s);
	return 0;
}*/
