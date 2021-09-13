#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	unsigned char c = 'a';
	unsigned char n = 'g';
	
	printf("char = %c\n", c);
	printf("is alphanumeric = %i\n", ft_isalpha(c));
	printf("numb = %c\n", c);
	printf("is digit = %i\n", ft_isdigit(n));
	return (0);
}
