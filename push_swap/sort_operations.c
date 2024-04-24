#include "push_swap.h"

void	simple_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = stk_size(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_four(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
}

//talvez as 3 seguintes funções se transformarão em staticas.
void	three_n(t_node **stack_a)
void	four_n(t_node **stack_a, t_node **stack_b);
void	five_n(t_node **stack_a, t_node **stack_b);

void	radix_sort(t_node **stack_a, t_node **stack_b);

int	get_distance_node(t_node **stack, int i);
