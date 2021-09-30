/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:58:52 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/30 12:40:01 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;

	s = malloc(ft_strlen(s1) + 1);
	if (!s)
		return (0);
	ft_memcpy(s, s1, ft_strlen(s1) + 1);
	return (s);
}
