/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:51:06 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/13 15:27:02 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\n' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;
	int				j;
	char			*s;

	i = 0;
	j = 1;
	s = (char *)str;
	while (s[i] && is_space(s[i]))
		i++;
	if (s[i] == '-')
		j = -1;
	if (s[i] == '-' || s[i] == '+' || is_space(s[i]))
		i++;
	result = 0;
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (j * result);
}
/*
int main(int argc, char const *argv[])
{
	printf("%d", ft_atoi(argv[1]));
	return 0;
}
*/