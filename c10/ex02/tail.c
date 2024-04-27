#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

void	ft_putstr(char *str);
int	ft_strcmp(char *s1, char *s2);
int	ft_str_is_numeric(char *str);
int     ft_atoi(char *str);

void	ft_get_input(char *tab)
{
	int	i;

	while (1)
	{
		i = 0;
		while (tab[i - 1] != '\n')
			read(1, &tab[i++], 1);
		tab[i] = 0;
	}
}

void	ft_show_error(int id, char *input)
{
	ft_putstr("tail: ");
	if (id == 1)
	{
		ft_putstr("illegal offset -- ");
		ft_putstr(input);
	}
	if (id == 2)
	{
		ft_putstr(input);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
	}
	ft_putstr("\n");
}

void	ft_read_file(char *tab, char *file, int tail)
{
	int	fd;
	ssize_t	br;

	fd = open(file, O_RDONLY);
	if (fd < 0)	
	{
		ft_show_error(2, file);
		return ;
	}
	br = read(fd, tab, 30720);
	tab[br] = 0;
	close(fd);
	while (tail && br--)
		if (tail < 0)
		{
			if (tab[br] == '\n')
				tail++;
		}
		else
			tail--;
	tab = &tab[br + 1];
	ft_putstr(tab);
}

int	main(int ac, char **av)
{
	int	tail;
	char	*tab;

	tab = malloc(sizeof(char) * 30720);
	if (!tab)
		return (1);
	tail = -11;
	ac--;
	av++;
	if (!ft_strcmp(*av, "-c"))
	{
		if (ft_str_is_numeric(*av + 1))
		{
			tail = ft_atoi(*av + 1) + 1;
			ac -= 2;
			av += 2;
		}
		else
		{
			ft_show_error(1, *av + 1);
			return (1);
		}
	}
	if (!ac)
		ft_get_input(tab);
	while (ac--)
		ft_read_file(tab, *av++, tail);
	free(tab);
	return (0);
}
