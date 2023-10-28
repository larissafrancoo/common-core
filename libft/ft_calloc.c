/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:05:08 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/28 08:22:43 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;

	ret = (char *) malloc((nmemb + 1) * sizeof(size));
	if (!ret)
		return (NULL);
	*ret = 0;
	return (ret);
}
/*
int main(void)
{
	int	elenu = 7;
	int	elesize = sizeof(char);
	int	i;
	int	x = 48;
	char	*ret = ft_calloc(elenu, elesize);
	for (i = 0; i < elenu; i++)
	{
		ret[i] = x;
		write (1, &ret[i], 1);
		write (1, "\n", 1);
		x++;
	}
	return (0);
}
*/
