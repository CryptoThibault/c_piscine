#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	*res;
	int	*pres;

	res = malloc(sizeof(int) * length);
	if (!res)
		return (0);
	pres = res;
	while (tab && length--)
		*res++ = f(*tab++);
	return (pres);
}
/*
int	ft_addone(int nb)
{
	return (nb + 1);
}

#include <stdio.h>
int	main()
{
	int	tab[4];
	int	*res;

	tab[0] = 11;
	tab[1] = 22;
	tab[2] = 33;
	tab[3] = 44;
	res = ft_map(tab, 4, &ft_addone);
	printf("%i\n", res[0]);
	printf("%i\n", res[1]);
	printf("%i\n", res[2]);
	printf("%i\n", res[3]);
}*/
