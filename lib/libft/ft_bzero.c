#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*nptr;

	if (!s) return ;
	nptr = s;
	while (n-- > 0) *nptr++ = '\0';
}
