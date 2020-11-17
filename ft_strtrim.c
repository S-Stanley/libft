#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_isit(char *str, int start, char *to_find)
{
	int		i;

	i = 0;
	while (str[start] && str[start] == to_find[i])
	{
		i++;
		start++;
	}
	if (i == ft_strlen(i))
		return 1;
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		n;

	res = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!res)
		return (NULL);
	i = 0;
	n = 0;
	while (s1[i] == set[i])
		i++;
	while (!ft_isit(s1, i, set))
	{
		res[n] = s1[i];
		i++;
		n++;
	}
	return (res);	
}