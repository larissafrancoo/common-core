/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:31:32 by lfranco           #+#    #+#             */
/*   Updated: 2023/10/27 18:09:41 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strtrim(const char *s1, const char *set)
{
	int	go;
	int	end;
//	int	i;
//	char	*ret;
	char	*s2;

	go = 0;
//	i = 0;
//	ret = 0;
	s2 = (char *)s1;
	end = ft_strlen(s2);
	if (*s2 != '\0')
	{
		while (s2[go] == *set || s2[end] == *set)
		{
			go++;
			end--;
		}
/*		while (s2[go] != '\0' && go < end)
		{
			ret[i] = s2[go];
			go++;
		}*/
		write (1, s2[go], 1);
		write (1, s2[end], 1);
	}
//	return (ret);
}

#include <stdio.h>
int main(void)
{
	char	*str = "kakalarissakaka";
	char	*set = "ka";
//	char	*ret =
	ft_strtrim(str, set);
//	printf("Deu isso: %s \n", ret);
	return (0);
}
