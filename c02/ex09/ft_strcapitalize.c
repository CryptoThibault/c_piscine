int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (ft_is_lowercase(*(str - 1)) || ft_is_uppercase(*(str - 1))
			|| ft_is_numeric(*(str - 1)))
			if (ft_is_uppercase(*str))
				*str += 32;
		if (!(ft_is_lowercase(*(str - 1)) || ft_is_uppercase(*(str - 1))
                        || ft_is_numeric(*(str - 1))))
			if (ft_is_lowercase(*str))
				*str -= 32;
		str++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "salut, comMEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return 0;
}*/
