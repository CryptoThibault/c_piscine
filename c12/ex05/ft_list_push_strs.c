#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(elem));
	elem->next = NULL;
	elem->data = data;		
	return (elem);
}

t_list  *ft_list_push_strs(int size, char **strs)
{
	t_list list;

	if (!size)
		return (NULL);
	list = ft_create_elem(strs[size]);
	list->next = ft_list_push_strs(size - 1, strs);
	return (list);
}
