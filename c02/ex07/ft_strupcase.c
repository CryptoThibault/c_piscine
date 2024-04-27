int	ft_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	while (*str)
	{
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
	char	str[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	ft_strupcase(str);
	printf("%s\n", str);
	return 0;
}*/
