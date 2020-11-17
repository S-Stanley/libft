#include <stdio.h>

void	*ft_memchr(const void *s, int c0, int n)
{
	unsigned char	c;
	char			*str;	
	int				i;

	c = c0;
	str = s;
	i = 0;
	while (i <= n)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}