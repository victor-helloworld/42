#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str);

int main(void)
{
//	unsigned char c = 'a';
//	unsigned char n = 'g';
	const char str[] = "       -211123 hola";

//	printf("char = %c\n", c);
//	printf("is alphanumeric = %i\n", ft_isalpha(c));
//	printf("numb = %c\n", c);
//	printf("is digit = %i\n", ft_isdigit(n));

	printf("atoi = %i\n", atoi(str));
	printf("ft_atoi = %i\n", ft_atoi(str));
	
	return (0);
}
