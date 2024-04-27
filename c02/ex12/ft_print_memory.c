#include <unistd.h>

int	ft_nbrlen_hexa(int nbr)
{
	int	len;

	if (!nbr)
		return (1);
	len = 0;
	while (nbr)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

void	ft_putnbr_hexa(int nbr)
{
	char *base;

	base = "0123456789abcdef";
	if (nbr >= 16)
		ft_putnbr_hexa(nbr / 16);
	write(1, &base[nbr % 16], 1);
}

void    *ft_print_memory(void *addr, unsigned int size)
{
	char	*str;
	int	i;
	int	len;
	uintptr_t	ptr;

	str = addr;
	while (*str && size)
	{
		ptr = (uintptr_t)addr;
		i = 0;
		while (i++ < 16 - ft_nbrlen_hexa(ptr))
			write(1, "0", 1);
		ft_putnbr_hexa(ptr);
		write(1, ": ", 2);
		i = 0;
		len = 0;
		while(i < 16)
		{
			if (str[i] && size)
			{
				ft_putnbr_hexa(str[i]);
				size--;
				len++;
			}
			else
				write(1, "  ", 2);
			if (i++ % 2)
				write(1, " ", 1);
		}
		write(1, " ", 1);
		write(1, &addr[0], len);
		write(1, "\n", 1);
		addr += 16;
		str += 16;
	}
	return (addr);
}
/*
int	main()
{
	void	*data = "Dans l'obscurite, les etoiles scintillent comme des joyaux suspendus dans le ciel, revelant leur beaute mysterieuse.";
	int	len = 0;
	char	*str = data;
	while (str[len])
		len++;
	ft_print_memory(data, len);
	return 0;
}*/
