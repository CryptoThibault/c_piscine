int	ft_atoi(char *str)
{
	int	sign;
	int	nb;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	nb = 0;
	while (*str >= '0' && *str <= '9')
		nb = nb * 10 + (*str++ - '0');
	return (nb * sign);
}
/*
#include <stdio.h>
int	main()
{
	printf("%i\n", ft_atoi("   --++--++1234ab12"));
	printf("%i\n", ft_atoi("   +---+--+1234ab12"));
	printf("%i\n", ft_atoi("42"));
	printf("%i\n", ft_atoi("-42"));
	return 0;
}*/
