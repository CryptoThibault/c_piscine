#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, int (*cmp)())

	t_list	prev;
	t_list	next;

	prev = NULL;
	while (begin_list2)
	{
		while (*begin_list1 && cmp((*begin_list1)->data, begin_list2->data) <= 0)
		{
			prev = *begin_list1;
			*begin_list1 = (*begin_list1)->next;;
		}
		if (prev)
			prev->next = begin_list2;
		else
			begin_list1 = begin_list2;
		next = begin_list2->next;
		begin_list2->next = *begin_list1;
		begin_list2 = next;
	}
}
