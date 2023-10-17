/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:29:41 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/17 04:00:19 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	int i;
	printf("CRIADA\n");
	char d[] = "lalalal";
	char s[] = "";
	printf("%s\n", s);
	ft_memcpy(d, s, 4);
	for (i = 0; i < 4; i++)
		printf("%c\n", s[i]);

	printf("\nORIGINAL\n");
	char d1[] = "lalalal";
	char s1[] = "";
	memcpy(d1, s1, 4);
	for (i = 0; i < 4; i++)
		printf("%c\n", s1[i]);
	return (0);
}

/*FUNÇÕES FT_IS:

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
	
int main(void)
{
	printf("ORIGINAL\n");
	printf("\nResult upercase: ");
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
	lala(128);
	return (0);
}
*/
