#include <stdlib.h>
#define size_t int;

int		ft_strlen(char *str, int i)
{
	while (str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * (ft_strnlen(s, start) + 1));
	if (!res)
	{
		return (NULL);
	}
	while (start <= len)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}