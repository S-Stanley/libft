void	*ft_memcpy(void *dist, const void *src, int n)
{
	int		i;
	char	*dist_b;
	char	*src_b;

	dist_b = dist;
	src_b = src;
	i = 0;
	while (i <= n)
	{
		dist_b[i] = src_b[i];
		i++;
	}
	return (dist);
}
