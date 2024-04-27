#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	n;

	if (min >= max)
		return (0);
	n = max - min;
	tab = malloc(sizeof(int) * n);
	if (!tab)
		return (0);
	while (min < max)
		*tab++ = min++;
	tab -= n;
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	int	*tab = ft_range(-2, 2);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	return 0;
}*/
