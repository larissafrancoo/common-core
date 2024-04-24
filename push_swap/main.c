/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:04:33 by lfranco           #+#    #+#             */
/*   Updated: 2024/04/24 18:03:02 by larissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_node **stack_a, t_node **stack_b)
{
	int		i;
	int		o;
	int		size;

	i = 0;
	size = stk_size(*stack_a);
	while (!check_stk_sort(stack_a))
	{
		o = 0;
		while (o++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				rx(stack_a, 'a');
			else
				px(stack_a, stack_b, 'b');
		}
		while (stk_size(*stack_b) != 0)
			px(stack_b, stack_a, 'a');
		i++;
	}
}

static void	sorting(int ac, t_node **stack_a, t_node **stack_b)
{
	if (ac < 7)
		simple_sort(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
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
	sorting(ac, stack_a, stack_b);
	stk_free(stack_a);
	stk_free(stack_b);
	return (0);
}
