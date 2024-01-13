/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:52:25 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/13 07:01:25 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*dup;

	i = 0;
	x = 0;
	if (!s2)
		return (NULL);
	dup = (char *) malloc((ft_strlen(s1, 0) + ft_strlen(s2, 0) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i != ft_strlen(s1, 0))
	{
		if(!s1)
			break ;
		dup[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		dup[i] = s2[x];
		x++;
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
int main(void)
{
	char *s1 = "larissa ";
	char *s2 = "franco\nsjfkehjfg";
	char *ret = ft_strjoin(s1, s2);
	printf("%s|\n", ret);
	free(ret);
	return (0);
}
*/
