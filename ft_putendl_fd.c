#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, '\n', 1);
}