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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!begin_list)
	{
		*begin_list = ft_create_elem(data);
		begin_list = *begin_list;
	}
	while ((*begin_list)->next)
		*begin_list = (*begin_list)->next;
	(*begin_list)->next = ft_create_elem(data);
}
