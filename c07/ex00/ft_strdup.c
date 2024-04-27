#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	dest -= len;
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	*str = ft_strdup("Hello");
	printf("%s\n", str);
	return 0;
}*/
