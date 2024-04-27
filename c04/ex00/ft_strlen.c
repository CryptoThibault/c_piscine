int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i", ft_strlen("Hello"));
	return 0;
}*/
