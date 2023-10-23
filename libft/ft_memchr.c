/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:15:01 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/23 11:45:56 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (s[i] != '\0' && i < n)
	{
		if 
		i++;
	}
	return (ret);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char *l = "larissa testando c";
	int chr = 'a';
	int lmt = 20;

	printf("jack sparrow: %s \n", (char *) ft_memchr(l, chr, lmt));
	printf("original kk: %s \n", (char *) memchr(l, chr, lmt));
	return (0);
}
