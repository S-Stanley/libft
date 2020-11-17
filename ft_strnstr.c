int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_isit(char *str, char *to_find, int start)
{
	int		i;

	i = 0;
	while (str[start] && to_find[i] && str[start] == to_find[i])
	{
		i++;
		start++;
	}
	if (i == ft_strlen(to_find))
		return (1);
	return (0);
}

char	*ft_strnstr(char *str, char *to_find, int searchmax)
{
	int		i;

	if (ft_strlen(to_find) == 0)
		return (str);
	i = 0;
	while (str[i] && i != searchmax)
	{
		if (ft_isit(str, to_find, i))
			return (&i);
		i++;
	}
	return (0);
}
