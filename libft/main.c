/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 15:47:45 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/16 15:48:02 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ubuntu #include <bsd/string.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
//	unsigned char c = '3';
//	unsigned char n = 'g';
//	const char str[] = "      -249";
char    dst[] = "there is no stars in the sky";
char    src[] = "the cake is a lie !";
t_size	size = 10;
char	**ptr;

int	i;
**ptr = NULL;
//	char str1[ ] = "abcdef";
//	char str2[ ] = "abcdefghijklmnop";
//	char c = ' ';

i = -1;
//	printf("atoi = %i\n", atoi(str));
//	printf("ft_atoi = %i\n", ft_atoi(str));

//	printf("bzero = %i\n", bzero(str, 2));
//	printf("ft_bzero = %i\n", ft_bzero(str));

//	printf("isalpha = %i\n", isalpha(c));
//	printf("ft_isalpha = %i\n", ft_isalpha(c));

//	printf("isdigit = %i\n", isdigit(n));
//	printf("ft_isdigit = %i\n", ft_isdigit(n));

//	printf("memchr(str1, c, 0) 	= %s\n", memchr(str1, c, 40));
//	printf("ft_memchr(str1, c, 0) = %s\n", ft_memchr(str1, c, 40));
	
//	printf("memcmp(str1, str2, 5) 	= %i\n", memcmp(str1, str2, 15));
//	printf("ft_memcmp(str1r, str2, 5) = %i\n", ft_memcmp(str1, str2, 15));

//	printf("memcpy(dst, src) 	= %s\n", memcpy(dst, src, 0));
//	printf("ft_memcpy(dsr, src) = %s\n", ft_memcpy(dst, src, 0));

//	printf("memmove(dst, src, len) = %s\n", memmove(dst, src, 2));
//	printf("ft_memmove(dst, src, len) = %s\n", ft_memove(dst, src, 10));

//	printf("strchr(dst, src, len) = %s\n", strchr(str1, c));
//	printf("ft_strchr(dst, src, len) = %s\n", ft_strchr(str1, c));

//	printf("strrchr(src, c) = %s\n", strrchr(str1, c));
//	printf("ft_strrchr(src, c) = %s\n", ft_strrchr(str1, c));

//	printf("strncmp(str1, str2) = %i\n", strncmp(str1, str2, 6));
//	printf("ft_strncamp(str1, str2) = %s\n", ft_strncmp(str1, str2, 4));

//	printf("strlcpy(dst, src, size) = %i\n", strlcpy(dst, src, 6));
//	printf("strlen(s1) = %zu\n", ft_strlen(str1));

//	printf("strnstr(dst, src, size) = %p\n", strnstr(dst, src, 6));
//	printf("strlcpy(dst, src, size) = %i\n", strlcpy(dst, src, 6));

/	printf("strlcat(dst, src, size): %%zu", strlcat(dst, src, size));

ptr = ft_split(str, c);
while (ptr[++i])
	printf("\nsplit: %s", ptr[i]);
return (0);
}
