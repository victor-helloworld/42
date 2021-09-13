int	ft_islower(unsigned char c)
{
	if (c > 96 && c < 123)
		return (c);
	else
		return (0);
}	

int	ft_isupper(unsigned char c)
{
	if (c > 64 && c < 91)
		return (c);
	else
		return (0);
}	

int	ft_isalpha(int c)
{
	if (ft_isupper(c) | ft_islower(c))
		return (c);
	else
		return (0);
}
