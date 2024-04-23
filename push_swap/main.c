/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:04:33 by lfranco           #+#    #+#             */
/*   Updated: 2024/04/21 17:00:46 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_node	**stack_a;

	if (!checker(ac, av))
	{
		ft_printf("ERRO\n");
		return (0);
	}
	stack_a = (t_node **) malloc(sizeof(t_node *));
	if (!stack_a)
		return (0);
	*stack_a = NULL;
	init_stack(stack_a, av);
	ft_printf("Q DELÍCIA ESSE OUTONO\n");
	return (0);
}
