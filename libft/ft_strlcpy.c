
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	n;
	int		i;
	int		b;

	len = 0;
	i = 0;
	b = 0;
	if (!dst || !src)
		return (0);
	n = (size_t)ft_strlen(src);
	if (dst == NULL || dstsize == 0)
		return (n);
	if (dstsize != 0)
	{
		while (len < dstsize - 1)
		{
			if (src[b] == '\0')
				break ;
			dst[i++] = src[b++];
			len++;
		}
		dst[i] = '\0';
	}
	return (n);
}
