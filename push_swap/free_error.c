#include "push_swap.h"

void	put_error(char *m)
{
	ft_putendl_fd(m, 2);
	exit(0);
}

void	stk_free(t_node **stack)
{
	t_node	*head;
	t_node	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}

void	str_free(char **str);
