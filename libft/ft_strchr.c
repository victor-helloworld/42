/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 21:53:44 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/22 22:38:31 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;
	unsigned char	i;

	i = -1;
	chr = (unsigned int) c;
	while (s[++i])
		if (s[i] == chr)
			return ((char *)(s + i));
	if (s[i] == chr)
		return ((char *)(s + i));
	return (NULL);
}
