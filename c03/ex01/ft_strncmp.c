int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s1 == *s2 && n--)
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
	printf("%i\n", ft_strncmp("Hello", "Hello", 3));
	printf("%i\n", ft_strncmp("Hello", "Helmo", 8));
	printf("%i\n", ft_strncmp("Hello", "Hell", 4));
	printf("%i\n", ft_strncmp("Helmo", "Hello", 5));
	printf("%i\n", ft_strncmp("Hell", "Hello", 2));
	return 0;
}*/
