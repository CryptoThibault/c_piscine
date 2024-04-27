void	ft_foreach(int *tab, int length, void(*f)(int))
{
	while (*tab && length--)
		f(*tab++);
}
/*
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

int	main()
{
	int	tab[4];

	tab[0] = 11;
	tab[1] = 22;
	tab[2] = 33;
	tab[3] = 44;
	ft_foreach(tab, 4, &ft_putnbr);
}*/
