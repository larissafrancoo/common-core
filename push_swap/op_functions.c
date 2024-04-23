#include "push_swap.h"

void	push(t_node **src_stack, t_node **dest_stack)
{
	t_node	*tmp;

	if (stk_size(*src_stack) == 0)
		return ;
	tmp = *src_stack;
	*src_stack = (*src_stack)->next;
	push_on(dest_stack, tmp);
}

void	swap(t_node **stack)
{
	t_node	*tmp;

	if (stk_size(*stack) < 2)
		return ;
	tmp = (*stack)->next;
	(*stack)->next = tmp->next;
	tmp->next = *stack;
	*stack = tmp;
}

void	rotate(t_node **stack)
{
	t_node	*tail;
	t_node	*head;

	if (stk_size(*stack) < 2)
		return ;
	tail = get_last(*stack);
	head = *stack;
	*stack = (*stack)->next;
	tail->next = head;
	head->next = NULL;
}

void	rev_rotate(t_node **stack)
{
	t_node	*tail;
	t_node	*back_tail;

	if (stk_size(*stack) < 2)
		return ;
	back_tail = *stack;

}
