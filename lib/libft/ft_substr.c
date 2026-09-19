#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char					*dest;
	size_t					i;
	size_t					size_src;

	if (src == NULL)
		return (NULL);
	size_src = ft_strlen(src);
	if (start >= size_src)
		return (ft_strdup(""));
	if (start + len > size_src)
		len = size_src - start;
	dest = malloc(len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		dest[i++] = src[start++];
	dest[i] = '\0';
	return (dest);
}
