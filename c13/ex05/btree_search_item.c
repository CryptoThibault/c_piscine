#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (!root)
		return (NULL);
	btree_search_item(root->left, data_ref, cmpf);
	if (!cmpf(root->item, data_ref))
		return (root->item);
	btree_search_item(root->right, data_ref, cmpf);
	return ;
}
