/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:01:10 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/06 18:55:21 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*str;

	c = (unsigned char)c;
	i = -1;
	str = (unsigned char *)s;
	while (++i < n)
	{
		if (str[i] == c)
			return ((void *)(str + i));
	}
	return (NULL);
}
