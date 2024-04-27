#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(1, str, len);
}

void	ft_display_input(char *tab)
{
	int	i;

	while (1)
	{
		i = 0;
		while (tab[i - 1] != '\n')
			read(1, &tab[i++], 1);
		tab[i] = 0;
		ft_putstr(tab);
	}
}

int	ft_read_file(char *tab, char *file)
{
	int	fd;
	ssize_t	br;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("cat: ");
		ft_putstr(file);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putstr("\n");
		return (0);
	}
	br = read(fd, tab, 30720);
	tab[br] = 0;
	close(fd);
	return (1);
}

int	main(int ac, char **av)
{
	char	tab[30720];
	
	if (ac == 1)
		ft_display_input(tab);
	av++;
	while (--ac)
		if (ft_read_file(tab, *av++))
			ft_putstr(tab);
	return (0);
}
