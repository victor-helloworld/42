/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcollazo <vcollazo@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:01:07 by vcollazo          #+#    #+#             */
/*   Updated: 2021/10/02 01:31:49 by vcollazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(const char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i += 1;
	}
}

void	ft_putnbr(int n)
{
	if(n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

int	isin_sep(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

void	fill_array(char **ptr_array, const char *str, char charset)
{
	int	counter;
	size_t	i;
	int	c;

	counter = -1;
	i = -1;
	c = -1;
	while (str[++i])
	{
		if (!isin_sep(str[i], charset))
		{
			if (i == 0 || counter == -1)
				++counter;
			ptr_array[counter][++c] = str[i];
			if (isin_sep(str[i + 1], charset) || i + 1 == ft_strlen((char *)str))
			{
				ptr_array[counter][++c] = '\0';
				c = -1;
				counter++;
			}
		}
	}
}

void	ptr_allocation(char **ptr_array, const char *str, char charset)
{
	int	i;
	int	c;
	int	i_word;

	i = -1;
	i_word = -1;
	c = 0;
	while (str[++i])
	{
		if (!isin_sep(str[i], charset))
		{
			c++;
			if (i == 0)
				i_word++;
			if ((str[i + 1] == 0) || isin_sep(str[i + 1], charset))
			{
				ptr_array[i_word] = malloc((c + 1) * sizeof(char));
				c = 0;
			}
		}
		else if (!isin_sep(str[i + 1], charset) && str[i + 1] != 0)
			i_word++;
	}
}

char	**ft_split(char const *str, char c)
{
	int		nb_str;
	char	**ptr_array;
	int		i;
	int		l;


	if (!str)
		return (NULL);
	
	l = ft_strlen(str);
	ft_putchar('\n');
	ft_putstr("_________________________________________________________________________________________________________");
	ft_putchar('\n');
	ft_putstr("str value:");
	ft_putstr(str);
	ft_putstr("ªªªªlen:");
	ft_putnbr(l);
	ft_putstr("ªªªªchar_c:");
	ft_putchar(c);
	ft_putstr("ªªªªascii_c:");
	ft_putnbr((int)c);
	ft_putchar('\n');

	//printf("\n\n\nstr: %s, len: %i, char: %c, ascii_char: %i", str, l, c, c);
	i = -1;
	nb_str = 0;
	while (++i < l && str[i])
	{
		ft_putnbr(i);
		ft_putchar('\n');
		ft_putnbr(!isin_sep(str[i], c));
		ft_putchar('\n');
		if (i < l - 1 && !isin_sep(str[i], c) && (isin_sep(str[i + 1], c)
				|| str[i + 1] == '\0'))
				{
					++nb_str;
					ft_putstr("nb_str:");
					ft_putnbr(nb_str);
				}
	}
	ft_putchar('\n');
	ft_putstr("nbr_str: ");
	ft_putnbr(nb_str);
	if (nb_str == 0)
		return (NULL);
	ft_putchar('\n');
	ptr_array = malloc(nb_str * sizeof(char *));
	ptr_allocation(ptr_array, str, c);
	fill_array(ptr_array, str, c);
	return (ptr_array);
}
