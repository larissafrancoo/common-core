/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:51:59 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/30 03:40:11 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (16348);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("Jack Sparrow: %d.\n", ft_isprint(15));
	return (0);
}*/
