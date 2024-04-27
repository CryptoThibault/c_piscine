int	ft_is_space(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

int     ft_is_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

int	ft_base_error(char *base)
{
	char	*pbase;

	if (!base)
		return (1);
	while (*base)
	{
		pbase = base + 1;
		if (ft_is_base(*base, pbase))
			return (1);
		if (*base == '+' || *base == '-' || ft_is_space(*base++))
			return (1);	
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	nb;
	int	blen;

	if (ft_base_error(base))
		return (0);
	while (ft_is_space(*str))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	nb = 0;
	while (ft_is_base(*str, base))
	{
		blen = 0;
		while (base[blen] != *str)
			blen++;
		nb = nb * ft_strlen(base) + blen;
		str++;
	}
	return (nb * sign);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("%i\n", ft_atoi_base("2A", "0123456789A3CDEF"));
	printf("%i\n", ft_atoi_base("101010", "01"));
	return (0);
}*/
