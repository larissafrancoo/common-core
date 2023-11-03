/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:05:21 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/03 06:09:34 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	len_finish;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	len_finish = len_d + len_s;
	if (len_d > size)
		return (size + len_s);
	while (len_d < size)
	{
		dst[len_d] = *src;
		++len_d;
		++src;
	}
	dst[len_d] = '\0';
	return (len_finish);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char d1[9] = "chocolate";
	char d2[9] = "chocolate";
	char *s1 = "sorvete";
	char *s2 = "sorvete";
	int len1 = 7;
	int len2 = 7;
	
	int ret1 = strlcat(d1, s1, len1);
	int ret2 = ft_strlcat(d2, s2, len2);
	
	printf("Ret da original: %d \n", ret1);
	printf("dst1 after: %s \n\n", d1);
	
	printf("Ret da Jack Sparrow: %d \n", ret2);
	printf("dst2 after: %s \n", d2);
	return (0);
}*/
