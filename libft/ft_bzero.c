
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = s;
	while (i != n)
	{
		str[i] = '\0';
		i++;
	}
}
