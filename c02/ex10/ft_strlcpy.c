unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	res;

	res = 0;
	while (*src && size--)
	{
		*dest++ = *src++;
		res++;
	}
	*dest = 0;
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	char	dest[512];
	ft_strlcpy(dest, "Hello", 4);
	printf("%s", dest);
}*/
