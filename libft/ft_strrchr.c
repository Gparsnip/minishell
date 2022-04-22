
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	i = 0;
	while (s[i] != '\0')
		i++;
	size = i + 1;
	if (c == '\0')
		return ((char *)(s + size - 1));
	else
	{
		while (i >= 0)
		{
			if (s[i] == c)
				return ((char *)(s += i));
			i--;
		}
	}
	return (NULL);
}
