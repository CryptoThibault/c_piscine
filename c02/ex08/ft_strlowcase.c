int	ft_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	while (*str)
	{
		if (ft_is_uppercase(*str))
			*str += 32;
		str++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "SALUT, COMMENT TU VAS ? 42MOTS QUARANTE-DEUX; CINQUANTE+ET+UN";
	ft_strlowcase(str);
	printf("%s\n", str);
	return 0;
}*/
