/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:59:04 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/30 03:34:12 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("Result Digit: %d.\n", ft_isalnum('6'));
	printf("Result Lowcase: %d.\n", ft_isalnum('a'));
	printf("Result Uppercase: %d.\n", ft_isalnum('H'));
	printf("Result Non_alnum: %d.\n", ft_isalnum('+'));
	return (0);
}*/
