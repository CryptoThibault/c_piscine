int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab)
		if (f(*tab++))
			return (1);
	return (0);
}
/*
#include <stdio.h>
int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while(*str)
		if (!ft_is_lowercase(*str++))
			return (0);
	return (1);
}

int	main()
{
	char	*tab[3];

	tab[0] = "AA";
	tab[1] = "bb";
	tab[2] = NULL;
	printf("%i", ft_any(tab, &ft_str_is_lowercase));
	return 0;
}*/
