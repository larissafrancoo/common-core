/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:56:47 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/13 07:06:30 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str, int c)
{
	size_t	len;

	len = 0;
	while (str[len] != c)
		len++;
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
	int s = ft_strlen("Vivendo e sabendo que tudo chega ao fim...");
	printf("Jack Sparrow: %d.\n", s);
	return (0);
}*/
