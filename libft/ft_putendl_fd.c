/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zezzine <zezzine@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:24:11 by zezzine           #+#    #+#             */
/*   Updated: 2021/11/11 18:25:58 by zezzine          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}