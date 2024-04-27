#include "ft_list.h"

void    ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*pbegin_list;
	t_list	*elem;

	while (*begin_list)
	{
		pbegin_list = (*begin_list)->next;
		while (pbegin_list)
		{
			if (cmp(begin_list->data, pbegin_list->data) > 0)
			{
				elem = begin_list;
				begin_list->data = pbegin_list->data;
				pbegin_list->data = elem->data;
			}
			pbegin_list = pbegin_list->next;
		}
		begin_list = begin_list->next;
	}
}
