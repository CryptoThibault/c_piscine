#include <unistd.h>

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_putnbr_hexa(int nbr)
{
	char *base;

	base = "0123456789abcdef";
	if (nbr >= 16)
		ft_putnbr_hexa(nbr / 16);
	write(1, &base[nbr % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while(*str)
	{
		if (ft_is_printable(*str))
			write(1, &*str, 1);
		else
		{
			write(1, "\\", 1);
			if (*str < 16)
				write(1, "0", 1);
			ft_putnbr_hexa(*str);
		}
		str++;
	}
}
/*
int	main()
{
	ft_putstr_non_printable("Coucou\ntu\tvas\fbien\v?");
	return 0;
}*/
