/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:29:01 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/23 21:43:50 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	*la = NULL;
	char	*ri = "";
	int	s = 6;

//	printf("Jack Sparrow: %d\n", ft_strncmp(la, ri, s));
	printf("Original: %d\n", strncmp(la, ri, s));
	return (0);
}
