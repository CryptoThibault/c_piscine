#include "ft_stock_str.h"
#include <unistd.h>

int	ft_strlen(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

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

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		write(1, par->str, par->size);
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		write(1, par->copy, ft_strlen(par->copy));
		write(1, "\n", 1);
		par++;
	}
}
/*
int	main(int ac, char **av)
{
	struct s_stock_str	*tab;

	tab = ft_strs_to_tab(ac - 1, av + 1);
	ft_show_tab(tab);
	return 0;
}*/
