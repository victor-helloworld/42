/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:07:13 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/30 16:19:29 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	x;

	if (!s)
		return ;
	i = 0;
	while (i != ft_strlen(s))
	{
		x = s[i];
		write(fd, &x, 1);
		i++;
	}
	write(fd, "\n", 1);
}
