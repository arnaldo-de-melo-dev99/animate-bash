#include "libft.h"

int	ft_tolower(char c)
{
	return (c >= 65 && c <= 90)? c + 32 : c;
}
