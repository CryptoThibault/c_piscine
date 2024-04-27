#include <unistd.h>

void	ft_print_tab(int tab[], int size)
{
	int	i;
	char	c;

	i = 0;
	while (i < size)
	{
		c = tab[i++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int	ft_queen_valid(int tab[], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (y == tab[i])
			return (0);
		if (y == tab[i] + x - i || y == tab[i] - x + i)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_solution(int tab[], int size, int x, int y)
{
	if (x == size)
	{
		ft_print_tab(tab, size);
		return (1);
	}
	while (y < size)
	{
		if (ft_queen_valid(tab, x, y))
		{
			tab[x] = y;
			return (ft_find_solution(tab, size, x + 1, 0));
		}
		y++;
	}
	if (x == 0)
		return (0);
	return (ft_find_solution(tab, size, x - 1, tab[x - 1] + 1));
}

int     ft_ten_queens_puzzle(void)
{
	int     tab[10];
	int	size;
	int	sol;

	size = 10;
	sol = 0;
	if (ft_find_solution(tab, size, 0, 0))
		sol++;
	while (ft_find_solution(tab, size, size - 1, size))
		sol++;
	return (sol);
}
/*
#include <stdio.h>
int	main()
{
	printf("Solutions: %i\n", ft_ten_queens_puzzle());
	return 0;
}*/
