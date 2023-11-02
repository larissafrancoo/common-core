/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:59:12 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/02 02:47:58 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	n_len(int n)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n < 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	if (n == 0)
		str = "0";
	if (n == -2147483648)
		str = "-2147483648";
if
	return (str);
}
int main(void)
{
	int nu = -2147483648;
	char *ret = ft_itoa(nu);

	printf("Result: %s \n", ret);
	return (0);
}
