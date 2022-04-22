
#include "libft.h"

void	*ft_memset(void *destination, int c, size_t n)
{
	unsigned int		i;
	char				*str;

	str = destination;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (destination);
}
