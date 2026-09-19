#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	j;

	j = 0;
	if (dst == NULL)
		return (0);
	lendst = ft_strlen(dst);
	lensrc = ft_strlen((char *)src);
	if (size < lendst)
		lensrc += size;
	else
		lensrc += lendst;
	while (src[j] != '\0' && (lendst + 1) < size)
	{
		dst[lendst] = src[j];
		lendst++;
		j++;
	}
	dst[lendst] = '\0';
	return (lensrc);
}
