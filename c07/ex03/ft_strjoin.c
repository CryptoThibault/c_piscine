#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	while(*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	**pstrs;
	char	*str;
	char	*pstr;
	int	totalsize;

	if (size < 1)
	{
		str = NULL;
		return (str);
	}
	pstrs = strs;
	totalsize = 0;
	while (*strs)
	{
		totalsize += ft_strlen(*strs++);
		if (*strs)
			totalsize += ft_strlen(sep);
	}
	str = malloc(sizeof(char) * totalsize);
	if (!str)
		return (0);
	pstr = str;
	while (*pstrs && size--)
	{
		ft_strcat(str++, *pstrs++);
		if (*pstrs && size)
			ft_strcat(str, sep);
	}
	return (pstr);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac < 2)
		return 1;
	av++;
	printf("%s\n", ft_strjoin(5, av, "(!)"));
	return 1;
}*/
