#include <stdlib.h>

void	*ft_calloc(int count, int size)
{
	int 	i;
	void	*total;
	char	*str;

	i = 0;
	total = malloc(size);
	str = (char *) total;
	while (i <= count)
	{
		str[i] = 0;
		printf("%d %d \n", i, str[i]);
		i++;
	}
	return (str);
}
