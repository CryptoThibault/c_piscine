void	ft_swap(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *b;
	*b = t;
}
/*
#include <stdio.h>
int	main()
{
	int c = 4;
	int d = 2;
	printf("c: %i, d: %i\n", c, d);
	ft_swap(&c, &d);
	printf("c: %i, d: %i\n", c, d);
	return 0;
}*/
