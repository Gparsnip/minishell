
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	unsigned int	i;

	i = 0;
	tmp = (unsigned char *)dst;
	tmp2 = (unsigned char *)src;
	while (i != n)
	{
		tmp[i] = tmp2[i];
		if (tmp2[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
