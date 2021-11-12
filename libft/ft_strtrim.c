/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:22:58 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/12 17:12:51 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;
	int		last;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	last = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i <= last)
		i++;
	while (ft_strchr(set, s1[last]) && i <= last)
		last--;
	p = (char *)malloc(sizeof(char) * (last - i + 2));
	if (!p)
		return (NULL);
	ft_strlcpy(p, (char *)s1 + i, (last - i) + 2);
	return (p);
}
