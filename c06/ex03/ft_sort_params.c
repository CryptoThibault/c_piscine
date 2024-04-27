#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	char	*tmp;

	if (ac <= 1)
		return (1);
	i = 1;
	while (i < ac)
	{
		j = i;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}		
		write(1, av[i], ft_strlen(av[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
