int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_sqrt(9));
	printf("%i\n", ft_sqrt(11));
	printf("%i\n", ft_sqrt(25));
	printf("%i\n", ft_sqrt(28));
	return 0;
}*/
