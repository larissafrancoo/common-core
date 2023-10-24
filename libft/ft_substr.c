/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:28:54 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/23 21:22:29 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	o;
	char			*ret;

	i = start;
	o = 0;
	ret = (char *) malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (o < len)
	{
		ret[o] = s[i];
		i++;
		o++;
	}
	ret[o] = '\0';
	return (ret);
}
/*
#include <stdio.h>
int main(void)
{
	char *s = "larissa estudando cc";
	int str = 8;
	int len = 9;
	char *lalal = ft_substr(s, str, len);

	printf("%s \n", lalal);
	free(lalal);
	return (0);
}*/
