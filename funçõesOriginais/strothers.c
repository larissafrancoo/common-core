/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strothers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:32:06 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/20 15:57:51 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*TESTE STRNSTR
int main(void)
{
	int len = 9;
	char big[] = "lalalal lolo";
	char little[] = "lolo";
     	char *str;

	str = strnstr(big, little, len);
	printf("%s\n", str);
	return (0);
}*/
/*TESTE STRCHR & STRRCHR
int main(void)
{
	const char *s = "Larissa estudando c";
	int c = 97;
	
	printf("strchr: %p\n", strchr(s, c)); //aponta para o endereço do 1º 'c' que encontrar
	printf("strrchr: %p\n", strrchr(s, c)); //aponta para o endereço do último 'c' que encontrar
	return (0);
}*/
/*TESTE STRLCPY & STRLCAT
int main(void)
{
	int size = 4;
	char dst[] = "lalalalal";
	const char *src = "lololol";

	strlcpy(dst, src, size);
	printf("strlcpy: %s\n", dst);
	strlcat(dst, src, size);
	printf("strlcat: %s\n", dst);
	return (0);
}*/
