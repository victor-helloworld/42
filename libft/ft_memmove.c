/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 13:07:38 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/22 21:29:47 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstc;
	char	*srcc;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if ((!dst && !src))
		return (NULL);
	if (srcc < dstc)
	{
		while (len-- > 0)
			dstc[len] = srcc[len];
	}
	else
	{
		while (++i < len)
			dstc[i] = srcc[i];
	}
	return (dst);
}
