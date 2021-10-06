/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 17:22:03 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/06 19:11:32 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*substr;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (substr = ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (len--)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
