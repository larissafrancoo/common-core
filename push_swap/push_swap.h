/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:12:28 by lfranco           #+#    #+#             */
/*   Updated: 2024/04/21 17:24:44 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/libftprintf.h"

typedef struct s_number_node
{
	int			index;
	int			number;
	struct s_number_node	*next;
}				t_node;

//struct da stack_a;
//struct da stack_b;

int	checker(int ac, char **av);

//a organizar:

//ft_stacks
void	init_stack(t_node **stack, char **av);
void	index_stack(t_node **stack);
t_node	*next_min(t_node **stack); //essa fica junto ao index_stack.
t_node	*node_maker(int nu);
//pop_push
t_node	*last_node(t_node *head);
void	push_under(t_node **stack, t_node *new_node);
void	push_on(t_node **stack, t_node *new_node);
//op_functions
void	stk_size(t_node *head);
void	push(t_node **src_stack, t_node **dest_stack);
void	swap(t_node **stack);
void	rotate(t_node **stack);
void	rev_rotate(t_node **stack);

#endif
