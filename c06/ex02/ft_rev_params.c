#include <unistd.h>

int	main(int ac, char **av)
{
	int	len;
	int	i;

	i = ac - 1;
	while (i > 0)
	{
		len = 0;
		while (av[i][len])
			len++;
		write(1, av[i--], len);
		write(1, "\n", 1);
	}
	return (0);
}

