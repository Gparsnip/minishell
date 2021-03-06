
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;
	int		b;

	len_dst = (size_t)ft_strlen(dst);
	len_src = (size_t)ft_strlen(src);
	i = 0;
	b = 0;
	while (dst[i])
		i++;
	if (dstsize != 0)
	{
		while (i < dstsize - 1)
		{
			if (src[b] == '\0')
				break ;
			dst[i++] = src[b++];
		}
	}
	dst[i] = '\0';
	if (dstsize < len_dst)
		return (dstsize + len_src);
	else
		return (len_dst + len_src);
}
