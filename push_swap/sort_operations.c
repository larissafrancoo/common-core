/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:32:16 by larissa           #+#    #+#             */
/*   Updated: 2024/04/24 00:25:52 by larissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void	radix_sort(t_node **stack_a, t_node **stack_b);
int	find_index_node(t_node **stack, int i)
{
	t_node	*head;
	int		node_position;

	head = *stack;
	node_position = 0;
	while (head)
	{
		if (head->index == i)
			break ;
		node_position++;
		head = head->next;
	}
	return (node_position);
}

static void	three_n(t_node **stack_a)
{
	if ((*stack_a)->index == min(stack_a, -1)
		&& (*stack_a)->next->index != min(stack_a, min(stack_a, -1)))
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->index == min(stack_a, min(stack_a, -1)))
	{
		if ((*stack_a)->next->index == min(stack_a, -1))
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if ((*stack_a)->next->index == min(stack_a, -1))
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

static void	four_n(t_node **stack_a, t_node **stack_b)
{
	int	position;

	position = find_index_node(stack_a, min(stack_a, -1));
	if (position == 1)
		ra(stack_a);
	else if (position == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (position == 3)
		rra(stack_a);
	if (check_stk_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	three_n(stack_a);
	pa(stack_b, stack_a);
}

static void	five_n(t_node **stack_a, t_node **stack_b)
{
	int	position;

	position = find_index_node(stack_a, min(stack_a, -1));
	if (position == 1)
		ra(stack_a);
	else if (position == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (position == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (position == 4)
		rra(stack_a);
	if (check_stk_sort(stack_a))
		return ;
	pb(stack_a, stack_b);
	four_n(stack_a, stack_b);
	pa(stack_b, stack_a);
}

void	simple_sort(t_node **stack_a, t_node **stack_b)
{
	int	size;

	size = stk_size(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		three_n(stack_a);
	else if (size == 4)
		four_n(stack_a, stack_b);
	else if (size == 5)
		five_n(stack_a, stack_b);
}
