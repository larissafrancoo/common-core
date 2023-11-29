/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 00:55:53 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/29 01:24:37 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar(char c)
{
	if (!c)
		return (0);
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		len += ft_putnbr(n / 10);
		len += ft_putnbr(n % 10);
	}
	else
		len += ft_putchar(n + 48);
	return (len);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		write (1, &s[len++], 1);
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
	int ret = ft_putnbr(-2147483648);
	printf("\n %d \n", ret);

	int stret = ft_putstr("123456789");
	printf("\n %d \n", stret);
	return (0);
}

*/
