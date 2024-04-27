int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("5^5 = %i\n", ft_recursive_power(5, 5));
	printf("-5^5 = %i\n", ft_recursive_power(-5, 5));
	printf("5^-5 = %i\n", ft_recursive_power(5, -5));
	printf("0^0 = %i\n", ft_recursive_power(0, 0));
	return 0;
}*/
