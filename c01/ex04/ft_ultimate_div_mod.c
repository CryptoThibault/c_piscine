void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a / *b;
	*b = *a % *b;
	*a = t;
}
/*
#include <stdio.h>
int	main()
{
	int c = 404;
	int d = 64;
	printf("c: %i, d: %i\n", c, d);
	ft_ultimate_div_mod(&c, &d);
	printf("c: %i, d: %i\n", c, d);
	return 0;
}*/
