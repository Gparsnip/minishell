
#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
		else
			return (c);
	}
	else
		return (c);
}
