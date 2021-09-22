/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:58:52 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/22 23:50:34 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;
	size_t	i;

	ptr = 0;
	i = -1;
	len = ft_strlen(s1);
	if (len == 0)
		ptr[++i] = '\0';
	else
	{
		ptr = malloc(len * sizeof(char));
		while (++i < len)
			ptr[i] = s1[i];
		ptr[i] = '\0';
	}
	return (ptr);
}
