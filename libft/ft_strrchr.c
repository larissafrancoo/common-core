/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 04:56:00 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/27 14:44:54 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = ft_strlen(s2);
	while (i >= 0)
	{
		if (s2[i] != c)
			i--;
		else
			return (&s2[i]);
	}
	return (s2 = 0);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char *la = "Larissa testando a Jack Sparrow.";
	int ri = 'L';
	char *ret = ft_strrchr(la, ri);
	char *met = strrchr(la, ri);
	
	printf("Jack Sparrow: %s \n", ret);
	printf("Original: %s \n", met);
	return (0);
}*/
