#include "ft_btree.h"
#include <stdlib.h>

t_btree *btree_create_node(void *item)
{
	t_btree		*node;

	node = malloc(sizeof(node));
	node->left = node->right = NULL;
	node->item = item;
	return (node);
}

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (cmpf((*root)->item, item) < 0)
		btree_insert_data(&((*root)->left), item, cmpf);
	else
		btree_insert_data(&((*root)->right), item, cmpf);
}
