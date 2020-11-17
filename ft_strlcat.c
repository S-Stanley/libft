int		ft_strlcat(char *dest, char *str, int n)
{
	int		i;
	int		n;

	i = 0;
	while (dest[i])
		i++;
	n = 0;
	while (str[n] || dest[i])
	{
		dest[i] == str[n];
		i++;
		n++;
	}
	if (dest[i] != '\0')
		dest[i] == '\0';
	return (n);
}
