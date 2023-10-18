/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 21:42:26 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/18 14:29:03 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup;

	i = 0;
	len = ft_strlen(s);
	dup = (char *) malloc(len * sizeof(char));
	while (i != len)
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
