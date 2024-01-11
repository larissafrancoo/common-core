/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:56:47 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/10 21:14:52 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
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
