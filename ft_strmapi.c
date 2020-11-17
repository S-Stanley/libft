#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1) );
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{

		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}