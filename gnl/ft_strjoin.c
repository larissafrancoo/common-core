/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:52:25 by lfranco           #+#    #+#             */
/*   Updated: 2024/01/10 21:17:59 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	char	*dup;

	i = 0;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	dup = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
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
