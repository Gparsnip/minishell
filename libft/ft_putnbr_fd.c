
#include "libft.h"

int	ft_chek_nbr(int tmp)
{
	int	i;

	i = 1;
	while (1)
	{
		tmp /= 10;
		if (tmp == 0)
			break ;
		i *= 10;
	}
	return (i);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	i;
	int	minus;

	minus = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		minus = -1;
	}
	i = ft_chek_nbr(n);
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		while (i != 0)
		{
			ft_putchar_fd((char)(48 + ((n / i) * minus)), fd);
			n %= i;
			i /= 10;
		}
	}
}
