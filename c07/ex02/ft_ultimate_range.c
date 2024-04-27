#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	n = max - min;
	*range = malloc(sizeof(int) * n);
	if (!*range)
		return (-1);
	while (min < max)
		*(*range)++ = min++;
	*range -= n;
	return (n);
}
/*
#include <stdio.h>
int	main()
{
	int	*tab;
	printf("size: %i\n", ft_ultimate_range(&tab, -2, 2));
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	printf("%i\n", *tab++);
	return 0;
}*/
