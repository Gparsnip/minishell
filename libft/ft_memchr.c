
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	tmp = (char *)s;
	while (i != n)
	{
		if (tmp[i] == c)
			return (tmp + i);
		i++;
	}
	return (NULL);
}
