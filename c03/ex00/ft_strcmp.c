int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_strcmp("Hello", "Hello"));
	printf("%i\n", ft_strcmp("Hello", "Helmo"));
	printf("%i\n", ft_strcmp("Hello", "Hell"));
	printf("%i\n", ft_strcmp("Helmo", "Hello"));
	printf("%i\n", ft_strcmp("Hell", "Hello"));
	return 0;
}*/
