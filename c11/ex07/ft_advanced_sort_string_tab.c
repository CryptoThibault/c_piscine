void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *)) 
{
	char	**ptab;
	char	*tmp;

	while (*(tab + 1))
	{
		ptab = tab + 1;
		while (*ptab)
		{
			if (cmp(*tab, *ptab) > 0)
			{
				tmp = *tab;
				*tab = *ptab;
				*ptab = tmp;
			}
			ptab++;
		}
		tab++;
	}
}
/*
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main()
{
	char	*tab[5];

	tab[0] = "test b";
	tab[1] = "test d";
	tab[2] = "test a";
	tab[3] = "test c";
	tab[4] = NULL;
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	return 0;
}*/
