#include "push_swap.h"

void	init_stack(t_node **stack, char **av)
{
	t_node	*nude;
	int		i;

	i = 1;
	while (av[i])
	{
		nude = node_maker(ft_atol(av[i]));
		push_under(stack, nude);
		i++;
	}
	index_stack(stack);
}

t_node	*node_maker(int nu)
{
	t_node	*node;

	node = (t_node *) malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->number = nu;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	index_stack(t_node **stack)
{
	t_node	*head;
	int		i;

	i = 0;
	head = next_min(stack);
	while (head)
	{
		head->index = i++;
		head = next_min(stack);
	}
}

//essa função vai ficar junto ao "index_stack", ou seja, ela vai se tornar static a separação
t_node	*next_min(t_node **stack)
{
	t_node	*head;
	t_node	*min;
	int		min_flag;

	head = *stack;
	min = NULL;
	min_flag = 0;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!min_flag || head->number < min->number))
			{
				min = head;
				min_flag = 1;
			}
			head = head->next;
		}
	}
	return (min);
}
