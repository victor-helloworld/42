/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:14:23 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/06 19:20:15 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len_s1;
	int		len_s2;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s1 || !s2)
		return (NULL);
	len_s1 = (int)(ft_strlen(s1));
	len_s2 = (int)(ft_strlen(s2));
	ptr = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (++i < len_s1)
		ptr[i] = s1[i];
	while (++j + i < len_s1 + len_s2)
		ptr[j + i] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
