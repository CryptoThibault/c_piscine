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
