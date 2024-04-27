int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	while (*(tab + 1) && length-- > 1)
	{
		if (f(*tab, *(tab + 1)) > 0)
			return (1);
		tab++;
	}
	return (0);
}
/*
#include <stdio.h>
int	ft_nbrcmp(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int	main()
{
	int	tab[4];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 2;
	printf("%i", ft_is_sort(tab, 4, &ft_nbrcmp));
	return 0;
}*/
