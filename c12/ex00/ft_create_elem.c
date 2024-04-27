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
