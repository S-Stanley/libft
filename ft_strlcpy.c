int		ft_strlcpy(char *dest, char *str, int n)
{
	int i;
	
	i = 0;
	while (str[i] || i != n)
	{
		dest[i] = str[i];
		i++;
	}
	if (i != n)
		dest[i] = 0;
	return (i);
}
