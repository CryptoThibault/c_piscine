int	ft_recursive_factorial(int nb)
{	
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("5! = %i\n", ft_recursive_factorial(5));
	printf("-5! = %i\n", ft_recursive_factorial(-5));
	printf("25! = %i\n", ft_recursive_factorial(25));
	printf("0! = %i\n", ft_recursive_factorial(0));
	return 0;
}*/
