#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);	
	}
	else if (n < 10)
	{
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
	else 
	{
		ft_putnbr(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}