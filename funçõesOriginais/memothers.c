/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memothers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:42:01 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/23 18:17:55 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

//TESTE MEMCHR
int main(void)
{
	char string_test[] = "Larissa estudando c";
	int search_ch = 'u';
	size_t count = 18;

	printf("%s \n", (char *) memchr(string_test, search_ch, count));
	return (0);
}
/*
 * TESTE PARA MEMCMP
int main (void)
{
	const void *first = "aaabala";
	const void *second = "aaalaba";
	int size = 7;

	printf("%d\n", memcmp(first, second, size));
	return (0);
}*/
/*TESTE MEMMOVE
int main (void)
{
	void *dest = "lalalau";
	const void *src = "bababau";
	int size = 3;

	printf("%s\n", (char *) memmove(dest, src, size));
	return (0);
}*/
