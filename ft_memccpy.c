void	*ft_memccpy(const void *src, const void *dest, int c, int size)
{
	int		i;
	char	*dest2;
	char	*src2;

	i = 0;
	dest2 = (char *) dest;
	src2 = (char *) src;
	while (i <= size)
	{
		dest2[i] = src2[i];
		if (src2[i] == c)
			return (i + 1);
		i++;
	}
	return (dest);
}