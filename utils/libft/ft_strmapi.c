#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*rest;

	i = -1;
	if (s == NULL || f == NULL)
		return (NULL);
	rest = (char *) malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!rest)
		return (NULL);
	while (++i < ft_strlen(s))
		rest[i] = f(i, s[i]);
	rest[i] = '\0';
	return (rest);
}
