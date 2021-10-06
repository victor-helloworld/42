/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:32:33 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/06 22:14:54 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i_start;
	int		i_end;
	int		i_ptr;

	if (!s1)
		return (NULL);
	i_start = 0;
	i_ptr = -1;
	i_end = ft_strlen(s1) - 1;
	if (!set)
	{
		if (!ft_strdup(s1))
			return (NULL);
		return (ft_strdup(s1));
	}
	while (s1[i_start] && ft_strchr(set, s1[i_start]))
		i_start++;
	if (i_start >= i_end)
		return (ft_strdup(""));
	while (i_end > i_start && ft_strrchr(set, s1[i_end]))
		i_end--;
	ptr = ft_substr((char *)s1, i_start, i_end - i_start + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}
