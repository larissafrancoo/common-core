/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 22:28:30 by larissa           #+#    #+#             */
/*   Updated: 2024/04/24 00:22:27 by larissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_putendl_fd("ra", 1);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_putendl_fd("rb", 1);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	if ((stk_size(*stack_a) < 2) || (stk_size(*stack_b) < 2))
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
}

void	rra(t_node **stack_a)
{
	rev_rotate(stack_a);
	ft_putendl_fd("rra", 1);
}

void	rrb(t_node **stack_b)
{
	rev_rotate(stack_b);
	ft_putendl_fd("rrb", 1);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if ((stk_size(*stack_a) < 2) || (stk_size(*stack_b) < 2))
		return ;
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_putendl_fd("rrr", 1);
}
