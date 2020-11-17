#include <stdlib.h>

char	*ft_strchr(const char *str, int c2)
{
	int		i;
	char	*res;
	char	c;

	c = c2;
	i = 0;
	res = malloc(sizeof(char));
	while (str[i] + 1)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}