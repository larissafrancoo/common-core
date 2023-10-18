/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:42:26 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/17 22:27:30 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lari_strlen(const char *str)
{
	int	len;

	len = 0;
	while (*str)
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	int	len;
	int	i;
	const char	*dup;

	i = 0;
	len = lari_strlen(s);
	dup = (const char *) malloc(len * sizeof(const char));
	while (s[i] != '\0')
	{
		s[i] = dup[i];
		i++;
	}
	return (dup);
}
int	main(void)
{
	#include <stdio.h>
	int i = 0;
	const char str[6] = {'a', 'a', 'a', '1', '1', '1'};
	while (str[i] < 6)
	{
		printf("%c", str[i]);
	}
	printf ("\n");
	return (0);
}
