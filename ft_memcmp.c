int		*ft_memcmp(const void *s1, const void *s2, int n)
{
	int		i;
	char	*s1b;
	char	*s2b;

	s1b = s1;
	s2b = s2;
	i = 0;
	while (i <= n)
	{
		if (s1b[i] != s2b[i])
		{
			s1b[i] - s2b[i];
		}
		i++;
	}
	return (0);
}