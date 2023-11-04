/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 05:05:21 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/03 20:36:23 by lfranco          ###   ########.fr       */
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
char d = "12345678";
	char *s = "aii";
	size_t len = 7;
	
	int ret = ft_strlcat(d, s, len);
	
	printf("Retorno: %d \n", ret);
	printf("dst1 after: %s \n\n", d);
	
	return (0);
}*/
