#include "libft.h"

char	*ft_strdup(const char *src)
{
	char		*copy;
	size_t		i;

	if (src == NULL)
		return (NULL);
	copy = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
