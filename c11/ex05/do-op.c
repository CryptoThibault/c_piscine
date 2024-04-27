#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
int     ft_atoi(char *str);
int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_mul(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);

int	ft_error(int b, int op)
{
	if (!op)
	{
		ft_putstr("0");
                return (1);
	}
	if (!b && op == 4)
	{
		ft_putstr("Stop : division by zero");
                return (1);
	}
	if (!b && op == 5)
	{
		ft_putstr("Stop : modulo by zero");
		return (1);
	}
	return (0);
}

int	ft_select_op(char *op)
{
	if (op[1])
		return (0);
	if (op[0] == '+')
		return (1);
	if (op[0] == '-')
		return (2);
	if (op[0] == '*')
		return (3);
	if (op[0] == '/')
		return (4);
	if (op[0] == '%')
		return (5);
	return (0);
}

int	main(int ac, char **av)
{
	int	(*f[5])(int, int);
	int	a;
	int	b;
	int	op;

	if (ac != 4)
		return (1);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	op = ft_select_op(av[2]);
	if (ft_error(b, op))
		return (1);
	f[0] = ft_add;
	f[1] = ft_sub;
	f[2] = ft_mul;
	f[3] = ft_div;
	f[4] = ft_mod;
	ft_putnbr(f[op - 1](a, b));
	return (0);
}
