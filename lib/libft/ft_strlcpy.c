#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	aux;

	i = 0;
	if (dst == NULL)
		return (0);
	aux = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size < 1)
		return (aux);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (aux);
}
