int				ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

unsigned char	*ft_toupper(unsigned char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isupper(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
