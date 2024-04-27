#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_base_error(char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_strcat(char *dest, char *src)
{
	while(*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest);
}

char	*ft_itoa_base(int nb, char *base)
{
	long	n;
	int	base_len;
	char	*res;
	char	*pres;

	n = nb;
	base_len = ft_strlen(base);
	res = malloc(sizeof(char) * 64);
	if (!res)
		return (0);
	pres = res;
	if (n < 0)
	{
		*res++ = '-';
		n = -n;
	}
	if (!n)
		*res = 0;
	else
	{
		ft_strcat(res, ft_itoa_base(n / base_len, base));	
		res += ft_strlen(res);
		*res++ = base[n % base_len];
		
	}
	return (pres);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (ft_base_error(base_from) || ft_base_error(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(nb, base_to));
}
/*
#include <stdio.h>
int	main()
{	
	printf("%s\n", ft_convert_base("101010", "01", "0123456789ABCDEF"));
	printf("%s\n", ft_convert_base("42", "0123456789", "0123456789ABCDEF"));
	return 0;
}*/
