
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	int		full;

	full = nmemb * size;
	arr = (void *)malloc(full);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, full);
	return (arr);
}
