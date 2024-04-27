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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_find_next_prime(43));
	printf("%i\n", ft_find_next_prime(44));
	return 0;
}*/
