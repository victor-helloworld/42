/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:09:48 by vcollazo          #+#    #+#             */
/*   Updated: 2021/09/30 16:22:50 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_nbrlen(int n)
{
	int	len;
	len = 0;
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);	
}

static char	*ft_nbrtostr(char *c, unsigned int nbr, int len)
{
	while (nbr > 0)
	{
		c[--len] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int		nbr;
	int		len;
	int		sign;
	char	*ptr;

	sign = 0;
	nbr = n;
	len = ft_nbrlen(n);
	if (n < 0)
		sign = 1; 
	ptr = (char *)malloc((len + sign) * sizeof(char));
	ptr[len] = '\0';
	ft_nbrtostr(ptr, nbr, len);

	return (ptr);
}
