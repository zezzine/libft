/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:23:21 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/13 14:02:27 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	len_int(int i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
	else if (i < 0)
		count++;
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*res;
	int				len;
	unsigned int	num;

	len = len_int(n);
	num = 0;
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res [len] = '\0';
	if (n == 0)
		res[--len] = n + '0';
	else if (n < 0)
	{
		num = n * -1;
		res[0] = '-';
	}
	else
		num = n;
	while (num > 0 && (len - 1) >= 0)
	{
		res[--len] = num % 10 + '0';
		num /= 10;
	}
	return (res);
}
/*
int main(int argc, char const *argv[])
{
	printf("%s", ft_itoa(atoi(argv[1])));
	return 0;
}*/