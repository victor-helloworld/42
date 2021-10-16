/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:32:33 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/16 12:24:57 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n);

// ft_putchar prints non printable characters (\n,...)
// providing the ascii number and a ' '
void	ft_putchar(char c)
{
	if (c > 32)
		write(1, &c, 1);
	else
	{
		ft_putnbr(c);
		write(1, " ", 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i += 1;
	}
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

void	ft_putstrascii(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putnbr(str[i]);
		i += 1;
		ft_putchar(' ');
	}
}

static int	chrinset(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}
