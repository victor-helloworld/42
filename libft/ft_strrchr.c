/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 22:39:33 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/22 22:39:46 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	len = ft_strlen(s);
	if (s[len] == c)
		return(char *)(s + len);
	while (s[--len])
	{
		if (s[len] == c)
			return ((char *)(s + len));
		if (len == 0)
			return (0);
	}
	return (0);
}

