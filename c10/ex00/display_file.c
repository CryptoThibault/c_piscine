#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

int	ft_ac_error(int ac)
{
	if (ac < 2)
	{
		ft_putstr("File name missing.");
                return (1);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		return (1);
	}
	return (0);
}

int	ft_read_file(char *tab, char *file)
{
	int	fd;
	ssize_t	br;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.");
		return (1);
	}
	br = read(fd, tab, 10240);
	tab[br] = 0;
	close(fd);
	return (0);
}

int	main(int ac, char **av)
{
	char	tab[10240];

	if (ft_ac_error(ac))
		return (1);
	if (ft_read_file(tab, av[1]))
		return (1);
	ft_putstr(tab);
	return (0);
}
