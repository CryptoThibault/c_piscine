#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;

	tab = malloc(sizeof(struct s_stock_str) * ac);
	if (!tab)
		return (NULL);
	while (*av)
	{
		tab->size = ft_strlen(*av);
		tab->str = *av;
		tab->copy = *av;
		av++;
		tab++;
	}
	tab->str = 0;
	tab -= ac;
	return (tab);
}
