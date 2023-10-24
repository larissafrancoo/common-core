/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 23:53:31 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/24 14:51:21 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	while (s2[i] != '\0')
	{
		if (s2[i] == c)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *s = "\0";
	int c = 0;

	printf("Jack Sparrow: %s \n", ft_strchr(s, c));
	printf("Original: %s \n", strchr(s, c));
	return (0);
}*/
