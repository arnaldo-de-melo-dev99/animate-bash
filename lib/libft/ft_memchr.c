#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*value;
	size_t				i;

	if (s == NULL)
		return (NULL);
	i = 0;
	value = (unsigned char *) s;
	while (i < n)
	{
		if (value[i] == (unsigned char)c)
			return ((void *) &value[i]);
		i++;
	}
	return (NULL);
}
