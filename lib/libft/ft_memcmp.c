#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*value1;
	const unsigned char	*value2;
	size_t				i;

	if (s1 == NULL && s2 == NULL)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	value1 = (unsigned char *) s1;
	value2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (value1[i] != value2[i])
			return (value1[i] - value2[i]);
		i++;
	}
	return (0);
}
