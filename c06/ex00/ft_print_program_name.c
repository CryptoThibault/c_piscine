#include <unistd.h>

int	main(int ac, char **av)
{
	int	len;

	if (ac == 0)
		return (1);
	len = 0;
	while (av[0][len])
		len++;
	write(1, av[0], len);
	return (0);
}
