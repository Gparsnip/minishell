
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*tmp;
	char			*tmp2;
	unsigned int	i;

	i = 0;
	tmp = (char *)dst;
	tmp2 = (char *)src;
	if (tmp != NULL || tmp2 != NULL)
	{
		while (i != n)
		{
			tmp[i] = tmp2[i];
			i++;
		}
	}
	return (dst);
}
