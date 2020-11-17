void	*ft_memmove(void *dist, const void *src, int n)
{
	int		i;
	char	*dist_b;
	char	*src_b;
	
	i = 0;
	dist_b = dist;
	src_b = src;
	while (i <= n)
	{
		dist_b[i] = src_b[i];
		i++;
	}
	return (dist);
}