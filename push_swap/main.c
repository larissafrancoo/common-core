/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:04:33 by lfranco           #+#    #+#             */
/*   Updated: 2024/04/24 00:15:37 by larissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sorting(t_node **stack_a, t_node **stack_b)
{
	simple_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_node	**stack_a;
	t_node	**stack_b;

	checker_input(ac, av);
	stack_a = (t_node **) malloc(sizeof(t_node *));
	stack_b = (t_node **) malloc(sizeof(t_node *));
	if (!stack_a || !stack_b)
		return (0);
	*stack_a = NULL;
	*stack_b = NULL;
	init_stack(stack_a, av);
	sorting(stack_a, stack_b);
	stk_free(stack_a);
	stk_free(stack_b);
	return (0);
}
