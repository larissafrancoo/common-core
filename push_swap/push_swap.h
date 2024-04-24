/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 12:12:28 by lfranco           #+#    #+#             */
/*   Updated: 2024/04/24 00:19:13 by larissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct s_number_node
{
	int			index;
	int			number;
	struct s_number_node	*next;
}				t_node;

//checker
void	checker_input(int ac, char **av);
int	check_stk_sort(t_node **stack);
//init
void	init_stack(t_node **stack, char **av);
void	index_stack(t_node **stack);
t_node	*next_min(t_node **stack); //essa fica junto ao index_stack.
t_node	*node_maker(int nu);
int	min(t_node **stack, int n);
//comands_push
t_node	*last_node(t_node *head);
void	push_under(t_node **stack, t_node *new_node);
void	push_on(t_node **stack, t_node *new_node);
//comands_base
int	stk_size(t_node *head);
void	push(t_node **src_stack, t_node **dest_stack);
void	swap(t_node **stack);
void	rotate(t_node **stack);
void	rev_rotate(t_node **stack);
//comands_r
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
//comands_sp
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_b, t_node **stack_a);
void	pb(t_node **stack_a, t_node **stack_b);
//free_error
void	put_error(char *m);
void	stk_free(t_node **stack);
void	str_free(char **str);
//sort_operations
void	simple_sort(t_node **stack_a, t_node **stack_b);
int	find_index_node(t_node **stack, int i);

#endif
