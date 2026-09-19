#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	value;

	value = n;
	if (value < 0)
	{
		ft_putchar_fd('-', fd);
		value *= -1;
	}
	if (value >= 0 && value <= 9)
	{
		ft_putchar_fd(value + '0', fd);
	}
	if (value > 9)
	{
		ft_putnbr_fd(value / 10, fd);
		ft_putnbr_fd(value % 10, fd);
	}
}
