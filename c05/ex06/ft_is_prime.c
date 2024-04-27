int	ft_is_prime(int nb)
{
	int	i;

	if (!(nb % 2) || !(nb % 3))
			return (0);
	i = 5;
	while (i < nb)
	{
		if (i == nb || i - 2 == nb)
			return (0);
		i += 6;
	}
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_is_prime(41));
	printf("%i\n", ft_is_prime(42));
	return 0;
}*/
