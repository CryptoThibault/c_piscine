#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_tab_valid(int tab[], int size)
{
	int	psize;

	while (size--)
	{
		psize = size;
		while (psize--)
			if (tab[size] <= tab[psize])
				return (0);
	}
	return (1);
}

void	ft_print_tab(int tab[], int size, int last)
{
	int	i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = tab[i++] + '0';
		write(1, &c, 1);
	}
	if (!last)
		write(1, ", ", 2);
}

void	ft_increse_tab(int tab[], int size)
{
	while (size--)
	{
		if (tab[size] < 9)
		{
			tab[size]++;
			break ;
		}
		else
			tab[size] = 0;
	}
}

void    ft_print_combn(int n)
{
	int	nbr[n];
	int	nb;
	int	max;

	if (n < 1 || n > 9)
		return ;
	nb = 0;
	max = 1;
	while (nb < n)
	{
		max += nb * ft_recursive_power(10, nb);
		nbr[nb++] = 0;
	}
	nb = 0;
	max = ft_recursive_power(10, n) - max;
	while (nb++ <= max)
	{
		if (ft_tab_valid(nbr, n))
			ft_print_tab(nbr, n, nb - 1 == max);
		ft_increse_tab(nbr, n);	
	}	
}
/*
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	ft_print_combn(atoi(av[1]));
	return 0;
}*/
