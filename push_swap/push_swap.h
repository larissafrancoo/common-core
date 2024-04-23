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
	struct s_list	*next;
}				t_node;

//struct da stack_a;
//struct da stack_b;

int	checker(int ac, char **av);

#endif
