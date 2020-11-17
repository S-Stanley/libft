void	*ft_memset(void *data, int to_write, int size)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) data;
	while (i <= size)
	{
		str[i] = to_write;
		i++;
	}
	return (str);
}
