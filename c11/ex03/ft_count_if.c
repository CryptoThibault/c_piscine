int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	count;

	count = 0;
	while (*tab && length--)
		if (f(*tab++))
			count++;
	return (count);
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

	tab[0] = "a";
	tab[1] = "bb";
	tab[2] = "cc5c";
	printf("%i", ft_count_if(tab, 3, &ft_str_is_lowercase));
	return 0;
}
*/
