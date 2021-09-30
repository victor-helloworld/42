/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:54:51 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/22 13:12:27 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	tsrc;
	size_t	tdst;

	tsrc = ft_strlen(src);
	tdst = ft_strlen(dst);
	if (tdst >= dstsize)
		return (tsrc + dstsize);
	while (src[i] && (tdst + i) < (dstsize - 1))
	{
		dst[tdst + i] = src[i];
		i++;
	}
	dst[tdst + i] = '\0';
	return (tdst + tsrc);
}
