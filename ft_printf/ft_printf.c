/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfranco <lfranco@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:44:47 by lfranco           #+#    #+#             */
/*   Updated: 2023/11/29 19:26:59 by lfranco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	li;

	if (!str)
		return (-1);
	i = 0;
	len = 0;
	va_start (li, str);
	while (str[i] != '\0')
	{
		while (str[i] == '%')
		{
			i++;
			while (str[i] == ' ')
				i++;
			if (str[i] == 'c')
				len += ft_putchar(va_arg(li, int));
			else if (str[i] == 's')
				len += ft_putstr(va_arg(li, char *));
			else if (str[i] == 'd' || str[i] == 'i')
				len += ft_putnbr(va_arg(li, int));
			else if (str[i] == 'p')
				len += ft_putptr(va_arg(li, long unsigned int));
			else if (str[i] == 'u')
				len += ft_putbase(va_arg(li, unsigned int), 10, 0);
			else if (str[i] == 'X')
				len += ft_putbase(va_arg(li, unsigned int), 16, 1);
			else if (str[i] == 'x')
				len += ft_putbase(va_arg(li, unsigned int), 16, 0);
			else if (str[i] == '%')
				len += ft_putchar('%');
			else
				return (-1);
			i++;
		}
		len += ft_putchar(str[i]);
		i++;
	}
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
//	char c = 'x';
	char *s = NULL;
//	int n = -5;
//	int nu = 0;
//	int num = 2023;
//	int hex = 47368432;

	int ori = ft_printf("Orig: \n %s \n\n", s);
	int jack = printf("Jack: \n %s \n\n", s);

	printf("\n Orig: %d \n", ori);
	printf("\n Jack: %d \n", jack);
	return (0);
}*/
