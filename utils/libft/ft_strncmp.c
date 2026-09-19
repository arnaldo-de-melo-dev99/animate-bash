#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	while (++i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
