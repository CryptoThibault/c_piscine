int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	while (nb-- > 1)
		res *= nb;
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	printf("5! = %i\n", ft_iterative_factorial(5));
	printf("-5! = %i\n", ft_iterative_factorial(-5));
	printf("25! = %i\n", ft_iterative_factorial(25));
	printf("0! = %i\n", ft_iterative_factorial(0));
	return 0;
}*/
