/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:36:52 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/24 14:19:10 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char c)
{
	int	limit;

	limit = 127;
	if (c >= 0 && c <= limit)
		return (1);
	return (0);
}
/*
int main(void)
{
#include <stdio.h>
	printf("%d \n", ft_isascii(128));
	return (0);
}*/
