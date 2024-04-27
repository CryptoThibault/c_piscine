#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	n;
	char	res;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	res = n % 10 + '0';
	write(1, &res, 1);
}
