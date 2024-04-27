void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (size - i > 1)
		ft_swap(&tab[i++], &tab[size-- - 1]);
}
/*
#include <stdio.h>
int	main()
{
	int tab[5];

	tab[0] = 3; 
	tab[1] = 4; 
	tab[2] = 2; 
	tab[3] = 5;
	tab[4] = 1;
	printf("tab: %i\n", tab[0]);
	printf("tab: %i\n", tab[1]);
	printf("tab: %i\n", tab[2]);
	printf("tab: %i\n", tab[3]);
	printf("tab: %i\n\n", tab[4]);
	ft_rev_int_tab(tab, 5);
	printf("tab: %i\n", tab[0]);
	printf("tab: %i\n", tab[1]);
	printf("tab: %i\n", tab[2]);
	printf("tab: %i\n", tab[3]);
	printf("tab: %i\n", tab[4]);
	return 0;
}*/
