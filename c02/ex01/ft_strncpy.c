char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && n--)
		*dest++ = *src++;
	*dest = 0;
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	dest[512];
	ft_strncpy(dest, "Hello", 4);
	printf("%s", dest);
}*/
