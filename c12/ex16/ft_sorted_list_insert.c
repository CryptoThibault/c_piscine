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

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*prev;
	t_list	*elem;

	prev = NULL;
	while (*begin_list && cmp((*begin_list)->data, data) <= 0)
	{
		prev = *begin_list;
		*begin_list = (*begin_list)->next;
	}
	elem = ft_create_elem(data);
	elem->next = *begin_list;
	if (prev)
		prev->next = elem;
	else
		begin_list = elem;
}
