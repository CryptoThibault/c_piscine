char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	dest[512];
	ft_strcpy(dest, "Hello");
	printf("%s", dest);
}*/
