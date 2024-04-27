int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	res = nb;
	while (power-- > 1)
		res *= nb;
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	printf("5^5 = %i\n", ft_iterative_power(5, 5));
	printf("-5^5 = %i\n", ft_iterative_power(-5, 5));
	printf("5^-5 = %i\n", ft_iterative_power(5, -5));
	printf("0^0 = %i\n", ft_iterative_power(0, 0));
	return 0;
}*/
