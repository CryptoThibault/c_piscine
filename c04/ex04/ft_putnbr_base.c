#include <unistd.h>

int	ft_base_error(char *base)
{
	char	*pbase;

	if (!base)
		return (1);
	while (*base)
	{
		pbase = base + 1;
		while (*pbase)
			if (*base == *pbase++)
				return (1);
		if (*base == '+' || *base++ == '-')
			return (1);		
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int	base_len;

	if (ft_base_error(base))
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base(n / base_len, base);
	write(1, &base[n % base_len], 1);
}
/*
int	main()
{
	ft_putnbr_base(42, "0123456789ABCDEF");
	return 0;
}*/
