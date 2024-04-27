int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (!ft_strcmp(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strstr("Hello world!", "world!"));
	printf("%s\n", ft_strstr("Hello wordd!", "world!"));
	return 0;
}*/
