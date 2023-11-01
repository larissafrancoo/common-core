/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 06:39:30 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/01 07:26:58 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(const char *b, const char *l, size_t len, size_t i)
{
	size_t	size;
	size_t	index;
	size_t	count;

	size = ft_strlen(l);
	index = 0;
	while (i <= len && index <= size)
	{
		if (b[i] == l[index])
			count++;
		i++;
	}
	if (count != size)
		return (0);
	else
		return (-1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		o;
	char	*bi;

	i = 0;
	o = 0;
	bi = (char *)big;
	if (!big)
		return (0);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			o = check(big, little, len, i);
			if (o == -1)
				return (&bi[i]);
		}
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char *one = "Larissa gosta de chocolate";
	char *two = "de";
	int len = 20;
	
	char *ret = ft_strnstr(one, two, len);
	printf("Jack Sparrow: %s \n", ret);
	printf("Original: %s \n", strnstr(one, two, len));
	return (0);
}*/
