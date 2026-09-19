#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = -1;
	if (big == NULL)
		return (NULL);
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (NULL);
	while (++i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j] != '\0')
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
	}
	return (NULL);
}
