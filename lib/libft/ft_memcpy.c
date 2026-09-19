#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char				*ptr1;
	const unsigned char			*ptr2;
	size_t						i;

	if (dest == NULL || src == NULL)
		return (dest);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dest);
}
