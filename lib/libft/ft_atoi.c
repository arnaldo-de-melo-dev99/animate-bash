#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	sum;
	size_t	i;
	size_t	sign;

	i = 0;
	sum = 0;
	sign = 1;
	if (!nptr)
		return (0);
	while (nptr[i] == ' ' || ((nptr[i] >= 9) && (nptr[i] <= 13)))
		++i;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-') sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		sum = (sum * 10) + (nptr[i] - '0');
		i++;
	}
	return (sum * sign);
}
