/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:29:41 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/16 20:14:11 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_isothers
#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
/*
size_t	lala(char *c)
{
	size_t a;
	a = ft_strlen(c);
	printf("%zu\n", a);
	return (a);
}

size_t	lolo(char *o)
{
	size_t a;
	a = strlen(o);
	printf("%zu\n", a);
	return (a);	
}
*/
void *memset(void *s, int c, size_t n);

int main(void)
{
	char *a = "lalalalala";
	printf("ORIGINAL\n");
	memset(a, 90, 2);
	printf("%s\n", a);
/*	printf("\nResult upercase: ");
	lolo('A');
	printf("\nResult number: ");
	lolo('9');
	printf("\nResult signal: ");
	lolo('+');
	printf("\nResult non-print: ");
	lolo('\n');
	printf("\nResult non-ascii: ");
	lolo(128);



	printf("\n\nCRIADA\n");
	printf("Result lowcase: ");
	lala("aaaaa");
	printf("\nResult upercase: ");
	lala('A');
	printf("\nResult number: ");
	lala('9');
	printf("\nResult signal: ");
	lala('+');
	printf("\nResult non-print: ");
	lala('\n');
	printf("\nResult non-ascii: ");
	lala(128);*/
	return (0);
}
