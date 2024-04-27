#include "ft_btree.h"
#include <stdlib.h>

typedef struct	e_queue
{
	void		*item;
	int		current_level;
	int		is_first_elem;
}			e_queue;

int	btree_size(t_btree *root)
{
	if (!root)
		return (0);
	return (btree_size(root->left) + btree_size(root->right) + 1);
}

void	btree_fill_queue(t_btree *root, e_queue **queue, int level)
{
	if (!root)
		return ;
	(*queue)->item = root->item;
	(*queue)->current_level = level;
	(*queue)->is_first_elem = 0;
	queue++;
	btree_fill_queue(root->left, &(*queue), level + 1);
	btree_fill_queue(root->right, &(*queue), level + 1);
}

void	btree_sort_queue(e_queue **queue)
{
	e_queue *pqueue;
	e_queue *elem;
	int	level;

	level = 0;
	while (*queue)
	{
		pqueue = *queue + 1;
		while (pqueue)
		{
			if ((*queue)->current_level > pqueue->current_level)
			{
				elem = *queue;
				*queue = pqueue;
				pqueue = elem;
			}
			pqueue++;
		}
		if ((*queue)->current_level == level)
		{
			level++;
			(*queue)->is_first_elem = 1;
		}
		queue++;
	}
}

void    btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	e_queue	*queue;
	int	size;

	size = btree_size(root);
	queue = malloc(sizeof(queue_elem) * size + 1);
	btree_fill_queue(root, &queue, 0);
	queue[size] = NULL;
	btree_sort_queue(&queue);	
	while (queue)
	{
		applyf(queue->item, queue->current_level, queue->is_first_elem);
		queue++;
	}
	free(queue);
}
