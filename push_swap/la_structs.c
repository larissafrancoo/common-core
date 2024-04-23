#include "push_swap.h"

t_node	*node_maker(int nu)
{
	t_node	*node;

	node = (t_node *) malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->number = nu;
	node->index = 0;
	node->next = NULL;
	return (node);
}


